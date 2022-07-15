#include<stdio.h>

int main(){
    int marks;
    scanf("%d",&marks);
    marks = marks/10;
    switch (marks) {
        case 10 :
        printf("Grade E");
        break;
        case 9 :
        printf("Grade O");
        break;
        case 8 :
        printf("Grade A+");
        break;
        case 7 :
        printf("Grade A");
        break;
        case 6 :
        printf("Grade B");
        break;
        case 5 :
        printf("Grade C");
        break;
        case 4 :
        printf("Grade D");
        break;
        default :
        printf("Grade E");
        break;
    }
    return 0;
}