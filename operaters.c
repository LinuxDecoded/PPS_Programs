#include<stdio.h>

int main() {
    int a, b, res, res1;
    printf("\t<---- Use of Operaters ---->\t\n\n");
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    //Arithmatic operators
    res=a+b; // or res=a-b;
    printf("Arithmatic operator --->\n");
    printf("%d + %d is: %d\n\n",a,b,res); 
    //Relational operators
    if(a>b) {
        printf("Relational operator --->\n");
        printf("%d is greater than %d\n\n",a,b);
    }
    else if(a==b) {
        printf("Relational operator --->\n");
        printf("%d is equal to %d\n\n",a,b);
    }
    else {
        printf("Relational operator --->\n");
        printf("%d is smaller than %d\n\n",a,b);
    }
    //Assignment operators
    res1=res;
    res-=a;
    printf("Assignment operator --->\n");
    printf("%d -= %d is: %d\n\n",res1,a,res);
    //Logical operators
    if(a>b && res1>a) {
        printf("Logical operator --->\n");
        printf("%d is greater than %d\nand %d is greater than %d\n",a,b,res1,a);
    }
    else {
        printf("Logical operator --->\n");
        printf("Either %d is not greater than %d or %d is not greater than %d\n",a,b,res1,a);
    }
}