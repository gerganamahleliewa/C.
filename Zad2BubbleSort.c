#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

void BubbleSort(int *arr,int size)
{
    int temp,i,j;

    for(i = 0;i < size-1;++i)
    {

        for(j = 0; j < size - 1 - i ;++j)
        {
          //if element in index j is bigger than next element then swap them
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
}


int main() {

    int sizeOfArray;
    printf("Enter size of Array:");
    scanf("%d",&sizeOfArray);
    int array[sizeOfArray];

    for(int i = 0 ;i < sizeOfArray ;++i)
    {
        printf("Enter number:");
        scanf("%d",&array[i]);
    }
//call function to sort array
    BubbleSort(array,sizeOfArray);
    for(int i = 0 ;i < sizeOfArray ;++i)
    {
      //print sorted array
        printf("%d ",array[i]);
    }


    return 0;
}



