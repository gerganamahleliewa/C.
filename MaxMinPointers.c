#include <stdio.h>
#include <math.h>
#include <ctype.h>

//create function 
void MaxMin(int num1,int num2,int *pMax,int *pMin)
{
    if(num1>num2)
    {
        *pMax = num1;
        *pMin = num2;
        printf("Max=%d\n",*pMax);
        printf("Min=%d\n",*pMin);

    }else{
       *pMax = num2;
       *pMin = num1;
        printf("Max=%d\n",*pMax);
        printf("Min=%d\n",*pMin);

    }
}

int main() {

    int a,b;
    printf("Enter A:");
    scanf("%d",&a);

    printf("Enter B:");
    scanf("%d",&b);
  //initialization pointers
    int *p=&a;
    int *ptr=&b;
  //call function
    MaxMin(a,b,p,ptr);



    return 0;
}
