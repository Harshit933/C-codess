#include<stdio.h>

int main(){
    int a =9, b =10;
    if(a > 8 && b > 7){
        printf("Logical AND operation is performed");
    }
    if(a > 10 || b > 8){
        printf("Logial OR operation is performed");
    }
    return 0;
}