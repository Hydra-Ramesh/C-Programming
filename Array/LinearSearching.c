//Linear Searching
#include<stdio.h>
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    for(i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    int n;
    printf("Enter the number to search: ");
    scanf("%d", &n);
    int found = 0;
    for(i = 0; i < 5; i++){
        if(a[i] == n){
            found = 1;
            break;
        }
    }
    if(found==1){
        printf("Number found at index %d\n", i);
    } else {
        printf("Number not found\n");
    }

    return 0;
}