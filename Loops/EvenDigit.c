#include<stdio.h>
int main(){
    int n = 85097782;
    int sum = 0;
    while(n>0){
        int ld = n%10;
        if(ld%2==0){
            sum = sum + ld;
        }
        n = n/10;
    }
    printf("Sum of digits: %d", sum);
    return 0;
}