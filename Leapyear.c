//Take a year and tell it is leapyear or not.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the year :");
    scanf("%d",&n);
    if(n%4==0){
        printf("It is leapyear");
    }else{
        printf("It is not a leapyear");
    }
    return 0;
}