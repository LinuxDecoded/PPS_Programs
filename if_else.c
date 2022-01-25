#include<stdio.h>

int main() {
    int a, b;
    printf("\t<---- if..else, Nested if..else ---->\t\n\n");
    
    printf("\t\t1')'Simple If..else\t\n\n");
    printf("Enter a positive/negative number: ");
    scanf("%d", &a);
    if(a>=0) {
        printf("%d is positive.\n\n", a);
    }
    else {
        printf("%d is negative.\n\n", a);
    }

    printf("\t\t2')'Nested if..else\t\n\n");
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    if (a != b) {
	    printf("%d is not equal to %d\n", a,b);
		//Nesting
        if (a > b) {
	 	    printf("%d is greater than %d\n", a,b);
	    }
	    else {
	 	    printf("%d is greater than %d\n", b,a);
	    }
    }
    else {
	    printf("%d is equal to %d\n", a,b);
    }

    return 0;
}