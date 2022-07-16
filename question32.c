#include <stdio.h>


void linearSearch(int ch[],int target){
    int a =0;
    for(int i =0; i < 5; i ++){
        if(ch[i] == target){
            printf("LOCATION OF THE TARGET IS : %d", i +1);
            a ++;
            break;
        }
    }
    if(a == 0){
        printf("NO SUCH ELEMENT EXISTS");
    }
}

int binarySearch(int ch[], int target){
    int s = 0;
    // int e = (int)( sizeof(ch) / sizeof(ch[0]) );
    int e = 5;
    while(e >= s){
        int mid = (e +s)/2;
        if(target == ch[mid]){
            // printf("LOCATION OF THE TARGET IS : %d", mid +1);
            return mid +1;
        } else if(target > ch[mid]){
            s = mid +1;
        } else{
            e = mid -1;
        }
    }
    return -1;
}
int main(){
    int ch[10] = {2,3,4,5,6};
    int target;
    printf("Enter the target");
    scanf("%d",&target);
    // linearSearch(ch,target);
    printf("%d",binarySearch(ch,target));
    return 0;
}