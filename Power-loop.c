#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the base:");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b);
    int power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }printf("The %dth power of %d is %d",b,a,power);
    return 0;
}