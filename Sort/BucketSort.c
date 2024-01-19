#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <inttypes.h>

int getMax(int *a,int n)
{
    int max = 0;
    for(int i = 0; i< n;i++)
    {
        if(a[i] >= a[i+1])
        {
            max = a[i];
        }
    }
    return max;
}
void CountSort(int *a,int n,int pos)
{
    int count[10],b[10];
    memset(&count,0,sizeof(count));
    memset(&b,0,sizeof(b));

    for(int i = 0; i < n;i++)
    {
        ++count[(a[i]/pos) % 10] ;
    }

    for(int k = 1; k <= 9;k++)
    {
        count[k] = count[k] + count[k-1];
    }

    for(int j = n - 1; j >= 0;j--)
    {
        b[--count[(a[j]/pos) %10]] = a[j];
    }

    for(int s = 0; s < n;s++)
    {
        a[s] = b[s];

    }
}

void bucketSort(int *a,int n)
{
    int max = getMax(a,n);

    for( int i = 1;(max/i) > 0;i *=10)
    {
        CountSort(a,n,i);
    }
}
