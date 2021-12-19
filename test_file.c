#include<stdio.h>

int main() {
    int i;
    char a[10];
    for(i=0;i<4;i++) {
        printf("Enter: ");
        scanf("%c",&a[i]);
        getchar();
    }
    a[4]='\n';
    printf("Enter one more character: ");
    scanf("%c",&a[5]);
    getchar();
    for(i=0;i<10;i++) {
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}