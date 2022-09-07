// Q. Find the first Occurrence of 10 using binary search

#include <stdio.h>

int firstOccurrenceOf_10 ( int [], int, int, int );

int main()
{
    int n = 5;
    int target = 10;
    int arr[5] = { 5, 10, 10, 20, 20 };
    int result = firstOccurrenceOf_10(arr, 0, n-1, target);
    printf("%d", result);
    return 0;
}

int firstOccurrenceOf_10 ( int arr [], int start, int end, int target )
{
    if( start <= end )
    {
        int mid = start+(end-start)/2;
        if( arr[mid] < target )
            return firstOccurrenceOf_10( arr, mid-1, end, target );
        else {
            if( mid == 0 || arr[mid-1] != arr[mid] )
                return mid;
            else
                return firstOccurrenceOf_10( arr, start, mid-1, target );
        }
    }
    return -1;
}
