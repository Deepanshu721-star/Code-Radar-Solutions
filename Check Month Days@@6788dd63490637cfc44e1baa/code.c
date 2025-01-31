#include<stdio.h>
// #include <ctype.h>

int main(){
    int Light;
    scanf("%d",&Light);
    if(Light==1){
        printf("%d",31);
    }else if(Light==2){
        printf("%d",28);
    }else if(Light==3){
        printf("%d",30);
    }else if(Light==4){
        printf("%d",31);
    }else if(Light==5){
        printf("%d",30);
    }else if(Light==6){
        printf("%d",31);
    }else if(Light==7){
        printf("%d",30);
    }else if(Light==8){
        printf("%d",31);
    }else if(Light==9){
        printf("%d",30);
    }else if(Light==10){
        printf("%d",31);
    }else if(Light==11){
        printf("%d",30);
    }else if(Light==12){
        printf("%d",31);
    }else{
        printf("Invalid month");
    }
    return 0;
}