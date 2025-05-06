#include<stdio.h>
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
int binarySearch(int arr[], int n, int x){
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x){
            hi = mid-1;
        }else{
            lo = mid+1;
        }
    }
}
int main(){
    int arr [5]={1,2,3,4,5};
    print(arr, 5);
    int idx = binarySearch(arr, 5, 4);
    printf("\n%d", idx);
}