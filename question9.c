#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int sum = 0;
    while(a != 0){
        sum += a %10;
        a = a/10;
    }
    printf("Sum of the five digit number is : %d", sum);
    return 0;
}