#include<stdio.h>
int main(){
    int a[3][2] = {{1,2},{3,4},{5,6}};
    int b[2][4] = {{1,2,3,4},{5,6,7,8}};
    int c[3][4];
    //Print the first array
    printf("First array:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //Print the second array
    printf("Second array:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    //Multiplication of two arrays
    for(int i=0;i<3;i++){ //3//n
        for(int j=0;j<4;j++){//4//n=>n*n
            // ith row of a[][] and jth column of b[][]
            //(a[i][0],a[i][1],a[i][2]....)*(b[0][j],b[1][j],b[2][j]....)
            c[i][j]=0;
            for(int k=0;k<2;k++){//2//n=>n*n*n
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}