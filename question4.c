#include <stdio.h>

int main(){
    int p,r,t;
    printf("Enter the principal amount :");
    scanf("%d",&p);
    printf("Enter the rate of interest :");
    scanf("%d",&r);
    printf("Enter the time in years :");
    scanf("%d",&t);
    float si = (p*r*t)/100;
    printf("Simple interest is as follows : %f", si);
    return 0;
}