#include <stdio.h>
#include <math.h>
int main() {

   int num,sum,n;
   printf("Enter number:");
   //number of rows
   scanf("%d",&num);

// for spaces
   sum=num;

   n=1;

  for(int i=1;i<=num;++i) {
      //print spaces
     for(int k=sum;k>=1;k--)
     {
         printf(" ");
     }
     //printf value of pattern
     for(int j=1;j<=i;++j)
     {
         printf("%d ",j);

     }
     printf(" \n");
    sum--;
  }

    return 0;
}
