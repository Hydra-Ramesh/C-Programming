//Take a number from the user as a input and tivisible by Three and Five.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%5==0||n%3==0){
        printf("The number is divisible by 5 or 3");
    }else{
        printf("The number is not divisible by both");
    }
    return 0;
}