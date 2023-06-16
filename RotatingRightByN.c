#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 5


int main() {


    int arr[SIZE];
    int temp,position;
  //enter position to rotate
    printf("Enter position:");
    scanf("%d",&position);

  //Enter element in array
    for(int i = 0; i < SIZE; ++i)
    {

        printf("Enter number:");
        scanf("%d",&arr[i]);

    }
//loop for position 
    for(int j = 1;j <= position;++j) {
        temp=arr[SIZE-1];
      //loop for copy element in array
              for (int i = SIZE - 1; i > 0; --i) {

                      arr[i] = arr[i - 1];

              }
        arr[0]=temp;
     }
//print array
    for (int i = 0; i < SIZE; ++i) {

        printf("%d ", arr[i]);
    }

    return 0;
}


