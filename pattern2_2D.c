#include<stdio.h>

int main() {
    int i, j, a[10][10];
    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            if(i==2 || i==7) {
                printf("@ ");
                if(j==9) {
                    printf("\n");
                }
            }
            else {
                if(j==2 || j==7) {
                    printf("@ ");
                }
                else if(j==9) {
                    printf("* ");
                    printf("\n");
                }
                else {
                    printf("* ");
                }
            }
        }
    }
    return 0;
}
