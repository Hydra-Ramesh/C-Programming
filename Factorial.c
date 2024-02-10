//Print the factorial of a given number 'n'.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n:");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
        printf("%d\n",product);
    }if(n==0){
    printf("%d",1);
    }
    return 0;
}