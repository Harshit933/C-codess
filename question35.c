#include <stdio.h>

int main(){
    int arr[10] = {123,32,3,64,84,22};
    int length = 6;
    for(int i =0 ; i < length -1;i ++){
        for(int j =i +1; j >= 0 ; j --){
            if(arr[j -1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            else{
                break;
            }
        }
    }
    for(int i = 0; i < 6; i++)
      printf("%d ", arr[i]);

    return 0;
}