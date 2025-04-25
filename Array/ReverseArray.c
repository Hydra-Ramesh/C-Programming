// Two Pointers Technique
#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int i=0;
    int j=4;
    while(i<j){
        swap(&a[i], &a[j]);
        i++;
        j--;
    }
    for(i=0; i<5; i++){
        printf("%d ", a[i]);
    }
    return 0;
}