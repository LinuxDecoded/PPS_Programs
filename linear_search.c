#include<stdio.h>

int main() {
    int arr[10], i, n, ele;

    printf("Enter number of elements you want in array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for(i=0;i<n;i++) {
        printf("%d element: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element you want to find: ");
    scanf("%d", &ele);

    for(i=0;i<n;i++) {
        if(ele==arr[i]) {
            printf("Element found at %d position.", i+1);
            break;
        }
    }
    if(i==n)
    {
        printf("Element not fount in array!!");
    }
    return 0;
}