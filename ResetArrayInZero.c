#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 5



int main() {


  int arr[SIZE];

//Enter elements
  for(int i = 0;i < SIZE;++i)
  {
      printf("Enter number:");
      scanf("%d",&arr[i]);

  }
  //print array before
    for(int i = 0;i < SIZE;++i)
    {
        printf("%d ",arr[i]);
    }
  
//any elements has value zero
    for(int i = 0;i < SIZE;++i) {

        arr[i] = 0;
    }

    printf("\nZero array!\n");
//print zero array
    for(int i = 0;i < SIZE;++i)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

