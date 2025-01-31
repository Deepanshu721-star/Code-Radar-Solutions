#include<stdio.h>
// #include <ctype.h>

int main(){
    char Light;
    scanf("%c",&Light);
    Light=toupper(Light);
    if(Light=='A'){
        printf("Excellent");
    }else if(Light=='B'){
        printf("Good");
    }else if(Light=='C'){
        printf("Average");
    }else if(Light=='D'){
        printf("Below Average");
    }else if(Light=='F'){
        printf("Fail");
    }else{
        printf("Invalid input");
    }
    return 0;
}