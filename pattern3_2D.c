#include<stdio.h>

int main() {
    int i, j;
    for(i=0;i<12;i++) {
        for(j=0;j<=i;j++) {
            printf("* ");
            if(j==i) {
                printf("\n");
            }
            
        }
    }
}