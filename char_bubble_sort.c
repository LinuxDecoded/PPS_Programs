#include<stdio.h>

int sort(char *arr, int l) {
    char tmp;
    int i, j;
    for(i=0; i<l-1; i++) {
        for(j=0; j<l-i-1; j++) {
            if(arr[j]> arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    printf("Sorted array is: \n");
    for(i=0;i<l;i++) {
        printf("%c\n", arr[i]);
    }
}

int main() {
    int l, i;
    printf("Enter size of array: ");
    scanf("%d", &l);
    char arr[l];
    printf("Enter elements of array (A-Z) : \n");
    for(i=0;i<l;i++) {
        scanf("%c", &arr[i]);
        arr[i]=getchar();
    }
    sort(arr,l);
}