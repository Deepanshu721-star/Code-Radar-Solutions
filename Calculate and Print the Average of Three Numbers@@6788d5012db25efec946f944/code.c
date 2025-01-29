#include <stdio.h>

int main() {
    float a, b, c;
    
    // Taking input
    scanf("%d %d %d", &a, &b, &c);

    float average = (a + b + c) / 3; // Integer division

    // Print result with newline
    printf("Average: %.2f\n", average);

    return 0;
}
