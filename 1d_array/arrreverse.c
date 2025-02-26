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
    int arr[4] = {1001, 200,5005, 600}; 
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

    return 0;
}
