//Take a number from the user as a input and tivisible by Three and Five.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number as a input of n:");
    scanf("%d",&n);
    if(n%3==0&&n%5==0){
        printf("It is divisible by 5 and 3");
    }else{
        printf("It is not divisible");
    }
    return 0;
}