#include<stdio.h>
void printArray(int arr[][3], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int brr[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int sum[3][3];
    printf("First array:\n");
    printArray(arr, 3, 3);
    printf("Second array:\n");
    printArray(brr, 3, 3);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum[i][j] = arr[i][j] + brr[i][j];
        }
    }
    printf("Sum of the two arrays:\n");
    printArray(sum, 3, 3);
    return 0;
}