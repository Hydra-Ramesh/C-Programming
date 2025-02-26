#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x<0){
        x = x*-1;
        printf("The absolute value of the number is %d",x);
    }else{
        x = x;
        printf("The absolute value of the number is %d",x);
    }
    return 0;
}