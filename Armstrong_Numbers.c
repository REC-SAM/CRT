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
        count /= 10;
    return count;
}

int isArmstrongNumber( int num )
{
    long int sum = 0;
    int no_of_digits = findNumberOfDigit(num);
    for( int n = num; n > 0; n /= 10 )
        sum += pow(num%10,no_of_digits);
    return ( sum == num ) ? 1 : 0; 
}

void printAllArmstrongNumbers ( int max )
{
    for( int i = 0; i <= max; ++i )
    {
        if(isArmstrongNumber(i))
            printf("%d ",i);
    }
}
