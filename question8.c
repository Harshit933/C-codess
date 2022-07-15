#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int fac = 1;
    for(int i =1 ; i <= a; i ++){
        fac *= i;
    }
    printf("Factorial of the number is as follows : %d", fac);
    return 0;
}