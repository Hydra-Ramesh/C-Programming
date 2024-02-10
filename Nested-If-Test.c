//Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n%5==0||n%3==0&&n%15==0){
        printf("The number divisible by 5 or 3 but not divisible by 15");
    }else{
        printf("The numbrt is not divisible by 5or 3 nut not divisible by 15");
    }return 0;
}