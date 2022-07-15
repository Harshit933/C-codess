#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    int e = (a > b) ? a : b;
    int f = (e > c) ? e : c;
    int g = (f > d) ? f : d;
    printf("%d",g);

    return 0;
}