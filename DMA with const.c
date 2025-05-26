#include <stdio.h>
#include <stdlib.h>
// Function to calculate GCD
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}
// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // Calculate LCM and store in a const variable
    const int resultLcm = lcm(num1, num2);
    printf("LCM is: %d\n", resultLcm);
    // Dynamically allocate memory using LCM
    int* array = (int*)malloc(resultLcm * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    // Initialize and print values
    for (int i = 0; i < resultLcm; i++) {
        array[i] = i + 1;
        printf("%d ", array[i]);
    }
    // Free memory
    free(array);
    return 0;
}
