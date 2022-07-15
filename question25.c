#include<stdio.h>

int main(){
    int r,c;
    printf("Enter the rows and column of the matrix");
    scanf("%d %d",&r,&c);
    int a[r][c], b[r][c];
    printf("ENTER THE FIRST MATRIX\n");
    for(int i =0 ; i< r; i ++){
        for(int j =0; j < c; j ++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nENTER THE SECOND MATRIX\n");
    for(int i =0 ; i< r; i ++){
        for(int j =0; j < c; j ++){
            scanf("%d",&b[i][j]);
        }
    }
    int d[r][c];
    for(int i =0 ; i< r; i ++){
        for(int j =0; j < c; j ++){
            d[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i =0 ; i< r; i ++){
        for(int j =0; j < c; j ++){
            printf("%d",d[i][j]);
        }
    }
    return 0;
}