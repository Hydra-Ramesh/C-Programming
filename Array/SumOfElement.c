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
    return 0;
}