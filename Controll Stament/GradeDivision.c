#include <stdio.h>
int main() {
    float percentage;

    // Taking input
    printf("Enter the student's percentage: ");
    scanf("%f", &percentage);

    // Checking the grade based on percentage
    if (percentage >= 91 && percentage <= 100) {
        printf("Grade: Excellent\n");
    } else if (percentage >= 81 && percentage <= 90) {
        printf("Grade: Very Good\n");
    } else if (percentage >= 71 && percentage <= 80) {
        printf("Grade: Good\n");
    } else if (percentage >= 61 && percentage <= 70) {
        printf("Grade: Can do better\n");
    } else if (percentage >= 51 && percentage <= 60) {
        printf("Grade: Average\n");
    } else if (percentage >= 41 && percentage <= 50) {
        printf("Grade: Below Average\n");
    } else if (percentage == 40) {
        printf("Grade: Pass\n");
    } else if (percentage < 40) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid input! Please enter a percentage between 0 and 100.\n");
    }

    return 0;
}
