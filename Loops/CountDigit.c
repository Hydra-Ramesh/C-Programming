#include<stdio.h>
int main(){
    int n = 721151;
    int count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    printf("Number of digits: %d", count);
    return 0;
}