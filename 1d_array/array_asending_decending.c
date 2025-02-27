/*4. Write a C program to sort the first half of the array in ascending order and the second half in
 descending order.*/

#include<stdio.h>

//descending sort using bubble sort
void descending_sort(int arr[],int size) {
    for (int i = 1; i < size; i++) {           
        for (int j = 0; j < size - i; j++) {   
            if (arr[j+1] > arr[j]) {         
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


    //asending sort using bubble sort
void asending_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {           
        for (int j = 0; j < size - i; j++) {   
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//print array
void print_array(int arr[],int size) {
    for(int i = 0; i < size ; i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int main() {

    int arr[5],size;

    //user defined for size of array
    printf("enter how many elements to enter:");
    scanf("%d",&size);


    // enter elements
    for (int i = 0; i < size; i++) {
        printf("enter array elements:");
        scanf("%d",&arr[i]);
    }

    // print original array
    for (int i = 0; i < size; i++) {
        printf("original array:[%d]\n", arr[i]);
    }

    //mid point
    int mid_point = size / 2;
    descending_sort(arr,mid_point);

    //second half
    asending_sort(arr + mid_point,size - mid_point);


    //print the sorted array
    printf("Sorted array: ");
    print_array(arr, size);

    return 0;

}



