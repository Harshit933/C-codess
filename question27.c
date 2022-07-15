#include<stdio.h>

int main(){
    char ch[10];
    int j;
    fgets(ch);
    int i =0;
    int count =0;
    while(ch[i] != '\0'){
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
            count ++;
        }
    }
    printf("%d",count);
}