#include<stdio.h>

void print_arr(int *arr, int l) {
    for(int i=0; i<l; i++) {
        printf("%d, ", *arr);
        arr++;
    }
}

void swap() {
    
}

void partition() {

}

void quick_sort() {

}

int main() {
    int l;
    printf("Enter size of array: ");
    scanf("%d", &l);
    int arr[l];
    printf("Enter elements of array: \n");
    for(int i=0; i<l; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Your entered elements are: ");
    print_arr(arr, l);
    return 0;
}