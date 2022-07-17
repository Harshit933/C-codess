#include <stdio.h>
int average(int *array,int n);
int main(){
int a[20],*array,n,i;
printf("enter number of elements");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter %d element",i+1);
scanf("%d",&a[i]);
}
array=a;
average(array,n);

}
int average(int *array,int n){
int i,sum=0;
float avg;
for(i=0;i<n;i++){
sum+=*(array+i);

}
avg=(float)sum/6;
printf("average is %f",avg);
return avg;

}