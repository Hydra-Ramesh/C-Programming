#include<stdio.h>
#define PI 3.14 //Defining Pre Prosessor Constant
const int x = 5;//Global Constant
int x = 10; //Global Variable

// Function Scope
void printX(){
    printf("%d", x);
}
int main(){
    //Local Scope// Local Variable
    printf("%d\n", x);
    printX();
    return 0;
}