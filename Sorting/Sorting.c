#include<stdio.h>
#include<limits.h>
//Swap Function
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
//Printing Function
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}
//Bubble Sorting Function
void bubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
        //Every Pass
        for(int j=0;j<n-1;j++){
            // Itaration inside the Pass
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
//Selection Sort
void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        //It is passing loop
        int min = INT_MAX;
        int mindex = -1;
        //Find minimum and find its index
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindex = j;
            }
        }
        swap(&arr[i],&arr[mindex]);
    }
}
//Insertion Sort
void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1){
            if(arr[i]>=arr[j-1]){
                break;
            }
            if(arr[i]<arr[j-1]){
                swap(&arr[i],&arr[j-1]);
            }
            j--;
        }
    }
}
//Main Function
int main(){
    int arr[5]={5,4,3,2,1};
    print(arr,5);
    bubbleSort(arr,5);
    printf("\n");
    print(arr,5);
    printf("\n");
    selectionSort(arr,5);
    print(arr,5);
    printf("\n");
    insertionSort(arr,5);
    print(arr,5);
    return 0;
}