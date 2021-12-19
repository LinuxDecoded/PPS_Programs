#include<iostream>

int main() {
    int a, b, c;
    printf("%s\n\n%s", "\t<---- Swapping of two numbers ---->\t", "Enter First number :");
    scanf("%d", &a);
    printf("Enter Second number :");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("Swapped values are: \na: %d and b: %d\n", a, b);
    return 0;
}