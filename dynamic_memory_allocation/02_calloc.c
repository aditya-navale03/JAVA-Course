#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter how many elements you want: ");
    scanf("%d", &n);

    int *ptr = (int *)calloc(n, sizeof(int)); 

    if (ptr != NULL) {
        printf("Memory allocated at: [%p]\n", ptr);
    } else {
        printf("Memory is not allocated\n");
    }

    free(ptr);

    return 0;
}
