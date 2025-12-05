// Iterative Function  
#include <stdio.h>


int factorialIterative(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial (Iterative) = %d\n", factorialIterative(num));
   

    return 0;
}