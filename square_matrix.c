#include<stdio.h>

int main() {
    int i, j, size, a[20][20];
    printf("\t====Square matrix program=====\t\n");
    printf("Enter size of matrix: ");
    scanf("%d", &size);
    for(i=0;i<size;i++) {
        for(j=0;j<size;j++) {
            printf("Enter index %d%d element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<size;i++) {
        for(j=0;j<size;j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}