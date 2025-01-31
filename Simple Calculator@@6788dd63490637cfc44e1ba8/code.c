#include<stdio.h>
#include <ctype.h>

int main(){
    int a,b,c,d,e,f;
    char op;

    scanf("%d %d",&a,&b);
    scanf("%c",&op);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    if(op=='+'){
        printf("%d",c);
    }else if(op=='-'){
        printf("%d",d);
    }else if(op=='*'){
        printf("%d",e);
    }else if(op=='/'){
        printf("%d",f);
    }else{
        printf("%c",op);
    }
    return 0;
}