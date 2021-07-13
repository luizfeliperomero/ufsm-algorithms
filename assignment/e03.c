#include <stdio.h>

/*
 * The idea was to check if the elevator is overweight, the sensor will scan
 * the people's weight and compare its sum to the maximum capacity of the elevator
 * if the sum of the people's weight is larger than the maximum capacity of the
 * elevator, then everyone will need to leave. Only then, people will be able to
 * rejoin the elevator.
 * Once everyone has joined and the weight is under the limit, then it will be
 * ready to use.
 * */
int main() {
    float capacity = 0;
    int people = 0;
    float weight = 0;
    float accumulator = 0;// The sum of the people's weight.

    
    printf("(0) To close the door\n");
    printf("\nMaximum capacity(kg): ");// Here, the maximum capacity is stored;
    scanf("%f", &capacity);


    // This for loop is the elevator's scan that is checking out if the acumulator 
    // is larger than capacity. If it's larger everyone will need to leave and then
    // the elevator will be ready to receive people again.
    // "0" is the key to close the door, once someone pressed "0" the scan is going to stop.
    // and the elevator will continue working.
    for(people = 0;people < 6;people++) {
        printf("Weight(kg): ");
        scanf("%f", &weight);
        accumulator += weight;
        if(accumulator > capacity) {
            printf("The elevator is %.2f kg overweight!!\nEveryone out!\n\n", accumulator - capacity);
            accumulator = 0;
            people = 0;
        }
        if(weight == 0) {
            printf("Ready to use\n");
            return 0;
        }
    }
    printf("Ready to use\n");
    return 0;
}
