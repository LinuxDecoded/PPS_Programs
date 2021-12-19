#include<iostream>

int main() {
    int a, b, c;
    printf("%s\n\n%s", "\t<---- Greatest of three numbers ---->\t", "Enter First number :");
    scanf("%d", &a);
    printf("Enter Second number :");
    scanf("%d", &b);
    printf("Enter Third number: ");
    scanf("%d", &c);
    if(a>b && a>c) {
        printf("%d is greater than %d and %d.", a,b,c);
    }
    else if(b>a && b>c) {
        printf("%d is greater than %d and %d.", b,a,c);
    }
    else if(c>a && c>b) {
        printf("%d is greater than %d and %d.", c,a,b);
    }
    else {
        printf("I think all three numbers are equal!!");
    }
    return 0;
}