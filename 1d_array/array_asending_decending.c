#include<stdio.h>

// Descending sort using bubble sort
void descending_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Ascending sort using bubble sort
void ascending_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Print array
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size;

    printf("Enter how many elements to enter: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) {
        printf("Enter array element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    print_array(arr, size);

    int mid_point = size / 2;
    ascending_sort(arr, mid_point);
    descending_sort(arr + mid_point, size - mid_point);

    printf("First half sorted in ascending order: ");
    print_array(arr, mid_point);
    printf("Second half sorted in descending order: ");
    print_array(arr + mid_point, size - mid_point);
    
    printf("Final sorted array: ");
    print_array(arr, size);

    return 0;
}