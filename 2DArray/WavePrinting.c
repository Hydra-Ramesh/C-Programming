#include<stdio.h>
int main(){
    //Wave Printing
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int brr[3][3];
    int sum = 0;

    //Original Array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    //Wave Array
    for(int i=0;i<3;i++){
        if(i%2!=0){
            for(int j=2;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }else{
            for(int j=0;j<3;j++){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    //Diagonal Sum
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                sum = sum + arr[i][j];
            }
        }
    }
    printf("Sum of diagonal elements: %d",sum);


    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            brr[i][j]=arr[j][i];
        }
    }
    //Transpose Matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
}