//sum of array elements

#include <stdio.h>
int main()
{

    int arr[5],n;

    //user defined for size of array
    printf("enter how many elements to enter:");
    scanf("%d",&n);

    // enter elements
    for (int i = 0; i < n; i++) {
        printf("enter array elements:");
        scanf("%d",&arr[i]);
    }

    // print original array
    for (int i = 0; i < n; i++) {
        printf("original array:[%d]\n", arr[i]);
    }


    //sum
    int sum = 0;
    for(int i = 0;i < n ; i++){
        sum += arr[i];
        
    }
    printf("sum:[%d]",sum);

}