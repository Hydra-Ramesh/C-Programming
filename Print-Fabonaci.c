//print nth fibonacci number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of n:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("The %dth fabonaki number is %d",i,sum);
    }
    return 0;
}