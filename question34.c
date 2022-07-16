#include<stdio.h>


int max(int a,int b,int arr[]){
    int max = -1;
    for(int i =a; i < b; i ++){
        if(arr[i] > max){
            return i;
        }
    }
    return max;
}
void swap(int a, int b, int arr[]){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
int main(){
    int arr[10] = {123,32,3,64,84,22};
    for(int i=0; i < 6; i ++){
        int last = 6 - i;
        int m = max(0,last,arr);
        swap(m,last,arr);
    }
    for(int i = 0; i < 10; i++)
      printf("%d ", arr[i]);
    return 0;
}