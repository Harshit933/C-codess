#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the three Numbers :");
    scanf("%d %d %d",&a,&b,&c);
    // to find the greatest number
    int d = (a > b) ? a : b;
    int e = (d > c) ? d : c;
    // to find the smallest number
    int f = (a > b) ? b : a;
    int g = (f > c) ? c : f;
    printf("Greatest and smallest number are as follows : %d , %d", e, g);
    return 0;
}