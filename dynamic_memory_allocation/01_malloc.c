#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter how many elements you want: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr != NULL) {
        printf("Memory allocated at: [%p]\n",ptr);
    } else {
        printf("Memory is not allocated\n");
    }


for(int i = 0; i<n;i++) {
    scanf("%d",(ptr+i));
}

for(int i = 0; i<n;i++) {
    printf("%d",(*ptr+i));
}

    return 0;
}
