#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265


// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float power(float base, float exponent);
float squareRoot(float a);
float sine(float angle);
float cosine(float angle);
float tangent(float angle);
float logarithm(float base, float number);
float factorial(int n);


int main() {
    float num1, num2;
    int choice;

    printf("CALCULAS MASTER :\n");

    do {
        printf("\nSelect operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Sine\n");
        printf("8. Cosine\n");
        printf("9. Tangent\n");
        printf("10. Logarithm\n");
        printf("11. Factorial\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);



        switch(choice) {


            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", add(num1, num2));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", subtract(num1, num2));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", multiply(num1, num2));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0)
                    printf("Result: %.2f\n", divide(num1, num2));
                else
                    printf("Error: Division by zero\n");
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", power(num1, num2));
                break;

            case 6:
                printf("Enter number: ");
                scanf("%f", &num1);
                printf("Result: %.2f\n", squareRoot(num1));
                break;

            case 7:
                printf("Enter angle in degrees: ");
                scanf("%f", &num1);
                printf("Result: %.2f\n", sine(num1));
                break;

            case 8:
                printf("Enter angle in degrees: ");
                scanf("%f", &num1);
                printf("Result: %.2f\n", cosine(num1));
                break;

            case 9:
                printf("Enter angle in degrees: ");
                scanf("%f", &num1);
                printf("Result: %.2f\n", tangent(num1));
                break;

            case 10:
                printf("Enter base and number: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", logarithm(num1, num2));
                break;

            case 11:

                printf("Enter an integer: ");
                scanf("%f", &num1);
                printf("Result: %.2f\n", factorial((int)num1));
                break;

            case 12:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 12);

    return 0;
}


// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float power(float base, float exponent) {
    return pow(base, exponent);
}

float squareRoot(float a) {
    return sqrt(a);
}

float sine(float angle) {
    return sin(angle * PI / 180.0);
}

float cosine(float angle) {
    return cos(angle * PI / 180.0);
}

float tangent(float angle) {
    return tan(angle * PI / 180.0);
}

float logarithm(float base, float number) {
    return log(number) / log(base);
}

float factorial(int n) {
    if (n == 0)
        return 1;

    else
        return n * factorial(n - 1);
}
