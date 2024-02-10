#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    int max=0;
    for(int i=0;i<=3;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }printf("%d",max);
    return 0;
}