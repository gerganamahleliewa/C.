#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


void SelectionSort(int *arr,int size)
{
    int temp,i,j;
    for(i = 0;i <= size-1 ;i++)
    {
        int min = i;
        for( j = i + 1; j < size ; j++)
        {
            if(arr[j] < arr[min])//next eleemnt in array if is smaller than first element
            {
                min = j;
            }
        }
        if(min != i)
        {
          //swap element
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
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
    SelectionSort(array,sizeOfArray);
    for(int i = 0 ;i < sizeOfArray ;++i)
    {
      //print array
        printf("%d ",array[i]);
    }


    return 0;
}
