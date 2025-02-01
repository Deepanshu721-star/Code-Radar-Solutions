#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    switch(x>0){
        case 0:
        printf("Freezing\n");
        break;
        case 1:
        printf("Above Freezing\n");
        break;
    }
    return 0;
}