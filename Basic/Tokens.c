#include<stdio.h>
int main(){
    int count = 0;
    char arr[]= "H";
    for(int i=0; i<100; i++){
        if(arr[i]=='\0'){
            break;
        }
        printf("%c", arr[i]);
        count++;
    }
    printf("\n%d", count);
}