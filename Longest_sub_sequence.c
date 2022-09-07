// Q. Write a program to find the longest sub sequence.

#include <stdio.h>
#include <string.h>

int longestSubSequence( char seq [] );

int main()
{
    char seq[11] = {'a','a','b','a','a','a','b','a','a','a','a'};
    int result = longestSubSequence(seq);
    printf("%d",result);
    return 0;
}

int longestSubSequence( char seq [] )
{
    int i, max = 1, count = 1;
    for( i = 1; i < strlen(seq); ++i )
    {
        if(seq[i-1] != seq[i])
        {
            if(count > max)
                max = count;
            count = 1;
        }
        else
            ++count;
    }
    if(seq[i-1] != seq[i] && count > max)
    {
        max = count;
    }
    else if (seq[i-1] == seq[i])
        ++max;
    return max;
}
