#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    int product=1;
    for(int i=0;i<=3;i++){
        product=product*arr[i];
    }
    printf("%d",product);
    return 0;
}