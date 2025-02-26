/*An array consists of integers. Write a C program to count the number of elements less than zero,
greater than zero, and equal to zero.
*/
#include<stdio.h>

int main() {
    int n;
    printf("enter how many elements to enter:");
    scanf("%d",&n);

    //take elements from user
    int arr[10];
    for(int i = 0;i < n;i++) {
        printf("enter array elements from (0 to %d)",n);
        scanf("%d",&arr[i]);
    }

    //print elements
    for(int i = 0;i < n;i++) {
        printf("array elements:[%d]\n",arr[i]);
    }

    //count less than
     for(int i = 0;i < n;i++) {
        
        int count = 0;

        if(arr[n] < 0) {
           
            count++;
            
        }
        printf("numbers less than zero :%d",count);
    }


