#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    int sum =0; 
    for(int i =1; i < n; i ++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n){
        printf("The number is a perfect number");
    } else{
        printf("Number is not a perfect number");
    }
    return 0;
}