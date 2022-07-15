#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int rev = 0;
    while(a != 0){
        rev = rev * 10 + a%10;
        a = a /10;
    }
    printf("Reversed Number is : %d",rev);
    return 0;
}