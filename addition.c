#include<iostream>

int main() {
    int a, b, sum;
    printf("%s\n\n%s", "\t<---- Addition of two numbers ---->\t", "Enter First number :");
    scanf("%d", &a);
    printf("Enter Second number :");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum of two numbers is: %d\n", sum);
    return 0;
}