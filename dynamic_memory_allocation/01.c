#include<stdio.h>
#include<stdlib.h>
int main() {

int n;
printf("enter how much elements you want:");
scanf("%d",&n);

int *ptr=(int *)malloc(n * sizeof(int));

if(ptr != NULL) {
    printf("memory allocated:[%d]",ptr);
} else {
    printf("memory is not allocated");
}

    return 0;
}