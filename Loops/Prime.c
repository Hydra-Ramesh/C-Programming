#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n==1 || n==2){
        printf("Prime\n");
    }
    int isPrime = 1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime==1){
        printf("The Number is Prime\n");
    }else{
        printf("The Number is not Prime\n");
    }
    return 0;
}