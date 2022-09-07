// Q. Write a Program to find whether the given input is palidrome or not using Recursion.

#include <stdio.h>
#include <string.h>

int  isPal ( char [], int , int );

int main()
{
    char *word = "WOW";
    printf("%s %s", word, (isPal(word, 0, strlen(word)-1)) ? "is a palindrome" : "is not a palindrome");
    return 0;
}

int  isPal ( char arr [], int low, int high )
{
    if( low < high )
    {
        if( arr[low] != arr[high] )
            return 0;
        return isPal( arr, low+1, high-1 );
    }
    else
        return 1;
}
