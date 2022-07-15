#include <stdio.h>
#include <string.h>


int main(){
    char a[100];
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>1){
        int rem = n %2;
        n = n/2;
        char h = rem + '0';
        strcat(a,&h);
    }
    char b[1] = "1";
    strcat(a,&b);
    // printf("%s", a);
    int x = strlen(a);
    for (int i = 0; i < x / 2; i++){
        char ch = a[i];
        a[i] = a[x - i - 1];
        a[n - i - 1] = ch;
    }

    printf("%s", a);
    return 0;
}