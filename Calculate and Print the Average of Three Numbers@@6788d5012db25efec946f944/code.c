#include <stdio.h>

int main() {
    float a, b, c;
    
    // Taking input
    scanf("%f %f %f", &a, &b, &c);

    float average = (a + b + c) / 3; // Integer division

    // Print result with newline
    printf("Average: %.2f\n", average);

    return 0;
}
