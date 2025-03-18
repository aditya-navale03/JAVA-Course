#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter how many characters you want: ");
    scanf("%d", &n);
    getchar(); 

    char *ptr = (char *)malloc(n * sizeof(char));

    if (ptr != NULL) {
        printf("Memory allocated at: [%p]\n", ptr);
    } else {
        printf("Memory is not allocated\n");
        return 1;
    }

    printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%c", (ptr + i));
        getchar(); 
    }

    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%c", *(ptr + i));
    }

    free(ptr); 
    return 0;
}
