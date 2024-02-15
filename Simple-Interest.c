#include<stdio.h>
int main(){
    int p,r,t,i;
    printf("Enter the p :");
    scanf("%d",&p);
    printf("\nEnter the r :");
    scanf("%d",&r);
    printf("Enter the t :");
    scanf("%d",&t);
    i=(p*r*t)/100;
    printf("Simple interest is :%d",i);
    return 0;
}