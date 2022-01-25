#include<stdio.h>


int sort(int *arr, int l) {
    int tmp, i, j;
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
        printf("%d\n", arr[i]);
    }
}

int main() {
    int l, i;
    printf("Enter size of array: ");
    scanf("%d", &l);
    int arr[l];
    printf("Enter elements of array: \n");
    for(i=0;i<l;i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr,l);
}