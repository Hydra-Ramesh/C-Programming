//Given an array of marks of students, if the mark of any stuudent is less than 35 print its roll number.Roll number refer to index of array.
#include<stdio.h>
int main(){
    int marks[10]={50,80,89,20,66,65,75,91,97,86};
    for(int i=1;i<10;i++){
        if(marks[i]<35){
            printf("%d",i);
        }
    }
    return 0;
}