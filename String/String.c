#include<stdio.h>

int main(){
    char s[] = "Ramesh Das is a Good Boy\0";
    for(int i=0; s[i]!='\0'; i++){
        printf("%c", s[i]);
    }
    return 0;
}