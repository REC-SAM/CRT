// Q. Write a program to implement Binary Search using recursion

#include <stdio.h>

int binarySearch ( int [], int, int, int );

int main()
{
    int n = 5, result, target;
    int arr[n] = { 7, 18, 29, 43, 99 };
    
    printf("Elements in the array : ");
    for( int i = 0; i < 5; ++i )
        printf("%d "arr[i]);
    printf("\n");
    
    // Mid case
    target = 29;
    result = binarySearch ( arr, 0, n-1, target );
    printf("Element %d is at %d index",target, result);
    target = 7;
    result = binarySearch ( arr, 0, n-1, target );
    printf("%d",result);
    target = 43;
    result = binarySearch ( arr, 0, n-1, target );
    printf("%d",result);
    target = 100;
    result = binarySearch ( arr, 0, n-1, target );
    printf("%d",result);
    return 0;
}

int binarySearch ( int arr [], int start, int end, int target )
{
    if( start <= end )
    {
        int mid = start+(end-start)/2;
        if( arr[mid] == target )
            return mid;
        else if ( arr[mid] > target )
            return binarySearch( arr, start, mid-1, target );
        else
            return binarySearch( arr, mid+1, end, target);
    }
    return -1;
}
