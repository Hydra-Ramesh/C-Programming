#include<stdio.h>
int main(){
    int a[7] = {1, 3, 1, 1, 5, 7, 9};
    int x = 1;
    int idx = -1;
    for(int i = 0; i < 7; i++){
        if(a[i] == x){
            idx = i;
        }
    }
    if(idx != -1){
        printf("Last Occurrence of 1 is at index %d\n", idx);
    } else {
        printf("Element not found\n");
    }
    return 0;
}