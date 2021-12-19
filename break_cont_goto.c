#include<iostream>

int main() {
    int i, sum;
    printf("\t<---- Use of break, continue and goto ---->\t\n\n");
    //Testing break in for loop
    for(i=0;i<=8;i++){
        printf("Inside first for loop...\n");
        if(i==5){
            printf("Exiting for loop with break at i=5\n");
            break;
        }
    }

    //Testing continue in for loop
    for(i=0;i<=6;i++) {
        printf("Inside second for loop at: %d\n",i);
        if(i==5) {
            printf("Skipping i = %d using continue\n",i);
            continue;
        }
    }

    //Testing goto in for loop
    for(i=0;i<=10;i++) {
        sum=sum+i;
        if(i==5) {
            goto addition;
        }
    }
    addition:
        printf("\nSum is: %d using goto",sum);
}