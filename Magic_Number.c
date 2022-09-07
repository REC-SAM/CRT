// Q. Write a program to find whether the given number is a Magic Number or Not.

#include <stdio.h>

int isMagicNumber( int num);

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d %s", num, (isMagicNumber(num)) ? "is a Magic Number" : "is not a Magic Number" );
    return 0;
}

int reverse( int num )
{
    int res = 0;
    while( num > 0 )
    {
        res = res*10+num%10;
        num /= 10;
    }
    return res;
}

int isMagicNumber( int num )
{
    int res = 0;
    for(int n = num; n > 0; n /= 10)
        res += n%10;
    return (res*reverse(res) == num) ? 1 : 0;
}

// Input/Output:-
// ------------
//     Enter a number : 1729
//     1729 is a Magic Number  
