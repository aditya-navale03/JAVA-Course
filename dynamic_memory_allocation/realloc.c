#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_n;

    printf("Enter how many elements you want: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr != NULL) {
        printf("Memory allocated at: [%p]\n", ptr);
    } else {
        printf("Memory is not allocated\n");
        return 1;
    }

    printf("Enter the new size: ");
    scanf("%d", &new_n);

    int *new_ptr = (int *)realloc(ptr, new_n * sizeof(int));

    if (new_ptr != NULL) {
        printf("Memory reallocated at: [%p]\n", new_ptr);
        ptr = new_ptr; 
    } else {
        printf("Reallocation failed\n");
        free(ptr);
        return 1;
    }

    free(ptr);
    return 0;
}
