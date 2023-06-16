#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 5


int main() {


    int arr[SIZE];
    int temp,temp2;
//enter values
    for(int i = 0; i < SIZE; ++i)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
        temp=arr[0];
        temp2=arr[1];

    }
//arr[0]=arr[2], because we do rotating by 2 position
    for(int i=1;i<SIZE;++i)
    {
        arr[i-1]=arr[i+1];

    }

  //print new array
    for(int i=0;i<SIZE;++i)
    {
      //5,6,9,3,2 -> arr[0]=temp=5, arr[1=temp2=6 -> 9,3,2,5,6, because  new positon on temp is 3
        arr[SIZE-2]=temp;
        arr[SIZE-1]=temp2;
        printf("%d ",arr[i]);
    }

    return 0;
}

