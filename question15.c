#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int rev = 0;
    int temp = a;
    int length = 0;
    int n = 0;
    while(temp != 0){
        rev = rev * 10 + temp%10;
        temp = temp /10;
        length ++;
    }
    if(a == rev){
        printf("Number is palindrome \n");
        n ++;
    }
    if(n > 0){
        if(length %2 == 0){
            printf("Number is even length palindrome");
        } else{
            printf("Number is odd length palindrome");
        }
    }
    return 0;
}