#include <stdio.h>

int main(){
    int a, b =0;    
    scanf("%d",&a);
    for(int i =2; i < a/2; i ++){
        if(a%i == 0){
            b++;
            break;
        }
    }
    if(b >0){
        printf("Number is not prime");
    } else{
        printf("Number is prime");
    }
    return 0;
}