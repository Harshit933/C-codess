#include <stdio.h>



int main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    patternE(n);
    return 0;
}

void patternA(int n){
    for(int i =1; i <= n ; i ++){
        for(int j = 1; j <= i; j ++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

void patternB(int n){
    int a =1;
    for(int i =1; i <= n ; i ++){
        for(int j = 1; j <= i; j ++){
            printf("%d ",a);
            a ++;
        }
        printf("\n");
    }
}

void patternC(int n){
    for(int i =1; i <= n ; i ++){
        for(int j = 1; j <= i; j ++){
            printf("*");
        }
        printf("\n");
    }
}

void patternD(int n){
    for(int i =1; i <= n ; i ++){
        int spaces = n -i;
        for(int j = 0; j < spaces; j ++){
            printf(" ");
        }
        for(int j = 1; j <= i; j ++){
            printf("* ");
        }
        printf("\n");
    }
}

void patternE(int n){
    for(int i =1; i <= n ; i ++){
        int spaces = n -i;
        for(int j = 0; j < spaces; j ++){
            printf(" ");
        }
        for(int j = i; j >= 1; j --){
            printf("%d",j);
        }
        for(int j = 2; j <= i; j ++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i =1; i <= n-1; i++){
        int spaces = i;
        for(int j = 0; j < spaces; j ++){
            printf(" ");
        }
        for(int j = n -i; j >=1 ; j --){
            printf("%d",j);
        }
        for(int j = 2; j <= n -i; j ++){
            printf("%d",j);
        }
        printf("\n");
    }
}