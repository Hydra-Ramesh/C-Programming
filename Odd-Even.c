//Take integer from user then tell it is odd or even.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n%2==0){
        printf("The number is even");
    }else{
        printf("The number is odd");
    }
    return 0;
}