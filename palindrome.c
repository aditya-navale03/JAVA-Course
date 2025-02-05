//palimdrome
#include<stdio.h>
int main() {
    int number,reverse=0,original_value;
    printf("enter no:");
    scanf("%d",&number);
    
     original_value = number;
    
    while(number > 0) {
        reverse = reverse*10 + number%10;
        number =number /10;
    }
    printf("%d\n",reverse);
    
    original_value == reverse ? printf("no is palindrome\n") : printf("number is not palindrome");
    // printf("%d\t%d",number,reverse);
}