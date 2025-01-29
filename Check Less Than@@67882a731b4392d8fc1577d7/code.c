#include<stdio.h>
int main(){
    float x, y;
    scanf("%f %f", &x, &y);  // Input two floating-point numbers

    if (x > y) {
        printf("True\n");  // x is greater than y
    } else {
        printf("False\n"); // x is less than or equal to y
    }

    return 0;
}
