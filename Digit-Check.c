//Take a positive integer input and tell if it is a three digit number not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number for calculate for n:");
    scanf("%d",&n);
    if(n>99&&n<1000){
        printf("This is three digit number");
    }else{
        printf("This is not a three digit number");
    }
    return 0;
}