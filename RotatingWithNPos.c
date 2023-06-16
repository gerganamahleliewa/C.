#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 5


int main() {

    int arr[SIZE];
 
    int temp,position;
  //Enter position from user
    printf("Enter position:");
    scanf("%d",&position);
//Enter values in array
    for(int i = 0; i < SIZE; ++i)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
     
        temp=arr[0];
    }
//arr[0]=arr[i]- copy elements in array
    for(int i=1;i<SIZE;++i)
    {
        arr[i-1]=arr[i];
    }
//print new array
    for(int i=0;i<SIZE;++i)
    {
        arr[SIZE-position]=temp;

        printf("%d ",arr[i]);
    }

    return 0;
}

