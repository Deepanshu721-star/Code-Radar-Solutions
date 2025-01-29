#include <stdio.h>

int main() {
    int a, b, c;
    
    // Taking input
    scanf("%d %d %d", &a, &b, &c);

    int average = (a + b + c) / 3; // Integer division

    // Print result with newline
    printf("Average: %d\n", average);

    return 0;
}
