#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}

int main(){
    int a=2;
    int b=9;
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}