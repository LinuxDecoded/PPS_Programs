#include<stdio.h>
#include<unistd.h>

void print_arr(int *a, int len) {
    for(int i = 0; i < len; i++) {
        printf("%d\n", *a);
        a++;
    }
}

void merge(int arr[], int low, int mid, int high) {
    int temp[100];
    int i = low;
    int j = mid + 1;
    int k = low;

    while(i <= mid && j <= high) {
        if(arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j <= high) {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int len, i;
    printf("Enter size of array: ");
    scanf("%d", &len);
    int arr[len];
    printf("Enter %d elements in array -->\n", len);
    for(i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Entered array is: \n");
    print_arr(arr, len);
    printf("Sorting the array...\n");
    mergeSort(arr, 0, len-1);
    printf("Sorted array is: \n");
    print_arr(arr, len);
    return 0;
}