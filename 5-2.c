// Recursive Function 

#include <stdio.h>


int factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    printf("Factorial (Recursive) = %d\n", factorialRecursive(num));

    return 0;
}