#include <stdbool.h>
#include <stdio.h>
bool isPalindrome(int x) {
    if (x < 0)
        return false;
    else
    {
        int original = x;
        int reversed = 0;

        while (x != 0)
        {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10; 
        }
        return original == reversed;
    }
}

int main()
{
    int x = 12;
    if (isPalindrome(x))
        printf("num is palindrome");
    else
        printf("num is not palindrome");
    return(0);
}