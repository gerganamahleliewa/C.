#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 5


int main() {


  int arr[SIZE];
  int sum,sum1;

//Enter values
  for(int i=0;i<SIZE;++i)
  {
      printf("Enter number:");
      scanf("%d",&arr[i]);


  }

  //calculate sum and sum1
  for(int i=1;i<SIZE;++i)
  {
      sum1=arr[i]+arr[i+1];
      sum=arr[0]+arr[1];

      if(sum>sum1)
      {
          sum=sum1;
      }
  }
  //print sum wich is close to zero
    printf("Sum close to zero is : %d\n",sum);

    return 0;
}


