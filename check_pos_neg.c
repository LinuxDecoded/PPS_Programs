#include<stdio.h>

int main() {
    int a;
    printf("%s\n\n%s", "\t<---- Checking Positive or Negative ---->\t", "Enter the number :");
    scanf("%d", &a);
    if(a>=0) {
        printf("%d is positive.\n",a);
    }
    else {
        printf("%d is negative.\n",a);
    }
    return 0;
}