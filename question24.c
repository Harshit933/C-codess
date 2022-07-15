#include<stdio.h>


float triangleArea(int h, int base){
    float area = 0.5 * h * base;
    return area;
}

float circleArea(int r){
    float area = 3.14 * r * r;
    return area;
}

float rectangleArea(int l, int b){
    float area = l *b;
    return area;
}
int main(){
    int h,l,b,r,base;
    printf("Enter the height and base of the triangle ");
    scanf("%d %d",&h,&base);
    printf("Enter the length and breadth of the rectangle ");
    scanf("%d %d",&l,&b);
    printf("Enter the radius of the circle ");
    scanf("%d",&r);
    printf("Area of triangle is : %f" , triangleArea(h,base));
    printf("Area of rectangle is : %f" , rectangleArea(l,b));
    printf("Area of circle is : %f" , circleArea(r));
    return 0;
}