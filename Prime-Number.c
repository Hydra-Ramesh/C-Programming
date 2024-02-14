//Write a programme if a number is prime or n
    /*int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
        printf("The number is composite\n");
        a=1;
        break;
        }
    }if(n==1)printf("1 is nor prime not composite\n");
    else if(a==0)printf("The given number is prime\n");
    else printf("The number is invalid");

    return 0;*/
    #include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If num is divisible by i, then it's not a prime number
        }
    }
    return 1; // If no divisors found, it's a prime number
}

// Function to print prime numbers from 1 to n
void printPrimes(int n) {
    printf("Prime numbers from 1 to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call the function to print prime numbers
    printPrimes(n);

    return 0;
}

