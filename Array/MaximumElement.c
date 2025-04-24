#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 integers:\n");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("You entered:\n");
    for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    int sum = 0;
    for(int i=0; i<5; i++){
        sum += arr[i];
    }
    printf("Sum of elements: %d\n", sum);
    //Maximum Element
    int max = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Maximum element: %d\n", max);
    //Minimum Element
    int min = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Minimum element: %d\n", min);
    //Average
    float average = (float)sum / 5;
    printf("Average: %.2f\n", average);
    //Second Largest Element
    int second_largest = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] > second_largest && arr[i] < max){
            second_largest = arr[i];
        }
    }
    printf("Second largest element: %d\n", second_largest);
    //Second Smallest Element
    int second_smallest = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] < second_smallest && arr[i] > min){
            second_smallest = arr[i];
        }
    }
    printf("Second smallest element: %d\n", second_smallest);
    
    return 0;
}