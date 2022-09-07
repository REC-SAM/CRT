#include <stdio.h>
#include <math.h>

void printAllArmstrongNumbers ( int );

int main()
{
    int max_range;
    printf("Enter the Max range : ");
    scanf("%d",&max_range);
    puts("The Armstrong Numbers are :");
    printAllArmstrongNumbers(max_range);
    return 0;
}

int findNumberOfDigit ( int num )
{
    int count = 0;
    while( num > 0 )
    {
        num /= 10;
        ++count;
    }
    return count;
}

int isArmstrongNumber( int num )
{
    long int sum = 0;
    int no_of_digits = findNumberOfDigit(num);
    for( int n = num; n > 0; n /= 10 )
        sum += pow(n%10,no_of_digits);
    return ( sum == num ) ? 1 : 0; 
}

void printAllArmstrongNumbers ( int max )
{
    for( int i = 0; i <= max; ++i )
    {
        if( i < 10 || isArmstrongNumber(i) )
            printf("%d ",i);
    }
    return ;
}

// Input / Output :-
// ---------------
//     Enter the Max range : 400
//     The Armstrong Numbers are :
//     0 1 2 3 4 5 6 7 8 9 153 370 371
