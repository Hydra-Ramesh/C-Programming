#include<stdio.h>
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n = 5;
    int factorial = fact(n);
    printf("%d",factorial);
    return 0;
}