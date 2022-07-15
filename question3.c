#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("Addtion of two numbers : %d \n",a+b);
    printf("Multiplication of two numbers : %d \n",a*b);
    printf("Subtraction of two numbers : %d \n",a-b);
    printf("Division of two numbers : %d",(int) (a/b));
    return 0;
}