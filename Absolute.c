//Take a integer and determine the absolute value of this number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n<0){
        n=n*(-1);
        printf("Absolute value is:%d",n);
    }else{
        printf("It is already a absolute value");
    }
    return 0;
}