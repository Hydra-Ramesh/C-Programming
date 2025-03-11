#include<stdio.h>
int main(){
    printf("Enter the number of terms: ");
    int n;
    scanf("%d", &n);
    int a=0;
    int b=1;
    int sum;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The %dth term of the Fibonacci series is: %d", n, b);
    return 0;
}