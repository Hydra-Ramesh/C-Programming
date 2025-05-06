#include<stdio.h>
#include<string.h>
struct Girls{
    //Structure data Member
    int age;
    char name[20];
    char address[50];
};
int main(){
    struct Girls jinia = {.age = 19, .name = "Jinia", .address = "WB"};
    printf("Name: %s\n", jinia.name);
    printf("Age: %d\n", jinia.age);
    printf("Address: %s\n", jinia.address);
}