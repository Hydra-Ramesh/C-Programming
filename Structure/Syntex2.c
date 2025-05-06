#include<stdio.h>
#include<string.h>
struct Girls{
    //Structure data Member
    int age;
    char name[20];
    char address[50];
};
int main(){
    struct Girls jinia = {19, "Jinia", "West Bengal"};
    printf("Name: %s\n", jinia.name);
    printf("Age: %d\n", jinia.age);
    printf("Address: %s\n", jinia.address);
}