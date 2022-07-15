#include<stdio.h>

int main(){
    int r1,c1,r2,c2;
    printf("Enter the rows and column of the first matrix");
    scanf("%d %d",&r1,&c1);
    printf("Enter the rows and column of the second matrix");
    scanf("%d %d",&r2,&c2);
    if(c1 != r2){
        exit(0);
    }
    int a[r1][c1], b[r2][c2];
    printf("ENTER THE FIRST MATRIX\n");
    for(int i =0 ; i< r1; i ++){
        for(int j =0; j < c1; j ++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nENTER THE SECOND MATRIX\n");
    for(int i =0 ; i< r2; i ++){
        for(int j =0; j < c2; j ++){
            scanf("%d",&b[i][j]);
        }
    }
    int d[r1][c2];
    
}