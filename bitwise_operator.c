#include<stdio.h>

void binary_calc(int num) {
    int i[50], j;
    for(j=0;num>0;j++) {
        i[j]=num%2;
        num=num/2;
    }
    for(j=j-1;j>=0;j--) {
        printf("%d",i[j]);
    }
    printf("\n");
}

int main() {
    int a, b, c, d, e;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("\nValue of %d in binary is: ",a);
    binary_calc(a);
    printf("Value of %d in binary is: ",b);
    binary_calc(b);
    c=a&b;
    d=a|b;
    e=a^b;
    printf("\nValue of a&b is: ");
    binary_calc(c);
    printf("\nValue of a|b is: ");
    binary_calc(d);
    printf("\nValue of a^b is: ");
    binary_calc(e);
    return 0;
}