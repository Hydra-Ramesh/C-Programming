//Find the uniqe number in a given Array where all the elements are being repeated twice with one value being uniqe.
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,3,2,4,1,2,3};
    for(int i=0;i<=6;i++){
        bool flag=false;
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                flag=true;
            }
        }
        if(flag==false){
            printf("%d",arr[i]);
        }
    }
    return 0;
}

