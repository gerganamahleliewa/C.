#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

void InsertionSort(int *arr,int size)
{
     int temp,i,j;

     for(i = 1; i < size ;++i)
     {
       //temp is in index 1,because in index 0 is sorted
         temp = arr[i];
         j = i - 1;
        while(j >= 0 && arr[j] > temp)
        {
          //move number one position ahead
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
//call function to sort
    InsertionSort(array,sizeOfArray);
  //print sorted array
    for(int i = 0 ;i < sizeOfArray ;++i)
    {
        printf("%d ",array[i]);
    }


    return 0;
}
