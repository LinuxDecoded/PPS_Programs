#include<stdio.h>
#include<conio.h>

int sort(int *arr, int l) {
    int min, tmp, i, j;
    for(i=0; i<l-1; i++) {
        min=i;
        for(j=i+1; j<l; j++) {
            if(arr[j]<arr[min]) {
                min=j;
            }
        }
        tmp=arr[min];
        arr[min]=arr[i];
        arr[i]=tmp;
    }
    printf("Sorted array is: \n");
    for(int i=0; i<l; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int l; 
    printf("Enter size of array: ");
    scanf("%d", &l);
    int arr[l];
    printf("Enter elements in array: \n");
    for(int i=0; i<l; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr,l);
    getch();
}