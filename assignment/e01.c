#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 5000;
    int y = 25;
    // Function abs needed because the value we are looking for is the difference
    // so it doesn't matter if the value is a negative number.
    int diff = abs(x - y);
    int prev_diff = diff;

    for(;prev_diff >= diff;x += 4, y += 7) {
        prev_diff = diff;
        diff = abs(x - y);
    }
    
    // x and y are decreased here because the one before the last iteration contains the correct values.
    x -= 4*2; 
    y -= 7*2;

    printf("x: %d, y: %d, diff: %d\n", x, y, prev_diff);

    return 0;

}
