#include<stdio.h>


void reverse(int a[],int n){
    for(int i =0 ; i < n/2; i++){
        int temp = a[i];
        a[i] = a[n - 1 -i];
        a[n -1-i] = temp;
    }
    
}

void printArray(int a[], int n){
    for(int i =0; i< n; i ++){
        printf("%d",a[i]);
    }
}

void sumArray(int a[], int n){
    int sum =0;
    for(int i =0; i < n; i ++){
        sum += a[i];
    }
    printf("Sum = %d", sum);
}


int main(){
    int n;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n];
    for(int i =0; i< n; i ++){
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    printArray(a,n);
    sumArray(a,n);
    return 0;
}

