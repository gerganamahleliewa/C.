#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 5

//create function who gets array and size of array
int SumOfArray(int *arr,int size)
{
    int sum=0;
  //Enter elements in array
    for(int i=0;i<size;++i)
    {
        printf("Enter numbers:");
        scanf("%d",&arr[i]);
      //calculate sum of array
        sum+=arr[i];
    }
 
    return sum;
}

int main() {


  int arr[SIZE];
//call function 
    printf("Sum of array=%d", SumOfArray(arr,SIZE));

    return 0;
}


