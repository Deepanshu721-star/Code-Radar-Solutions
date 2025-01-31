#include<stdio.h>

int main(){
    char Light;
    scanf("%c",&Light);
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
        printf("Invalid grade");
    }
    return 0;
}