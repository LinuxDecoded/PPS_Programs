#include<stdio.h>

void disp(char *ele) {
    printf("You entered : %c\n", *ele);
}

int main() {
    int l, i;
    printf("Enter size of array: ");
    scanf("%d",&l);
    char arr[l];
    printf("Enter elements: ");
    for(i=0;i<l;i++) {
        scanf("%c",&arr[i]);
        arr[i]=getchar();
        disp(&arr[i]);
    }
    return 0;
}