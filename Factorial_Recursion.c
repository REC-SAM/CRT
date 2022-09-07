// Q) write a program to find factorial using recursion.

#include <stdio.h>
#include <stdlib.h>

long int fact ( int n );

int  main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of %d is %ld",n,fact(n));
    return 0;
}

long int fact ( int n )
{
    if ( n < 0 )
    {
        puts("Factorial can not be determined.");
        exit(1);
    }
    else if( n == 0 )
        return 1;
    return n*fact(n-1);
}
