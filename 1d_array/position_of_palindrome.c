#include <stdio.h>


int reverse(int n)
{
    int rev = 0; 
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return rev;
}

int main()
{

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

    int position = -1;                    

    for (int i = 0; i < 4; i++)
    { 
        int rev = reverse(arr[i]);

        if (rev == arr[i])
        {
            position = i;
            printf("Palindrome found at position: %d\n", position);
        }
    }

    if (position == -1)
    {
        printf("There is no palindrome number present\n");
    }
}