#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 6

void fillarray(double arr[],int n)
{
  //fill array with random eleemnts
    srand(time(NULL));
    for(int i = 0;i<n;++i)
    {
        arr[i]= ((double)rand()/((double) rand() + 0.1) );
    }
}
//sort by increasing value
int cmpfunc (const void * a, const void * b) {
   // return ( *(int*)a - *(int*)b );
    const double * a1 = (const double *) a;
    const double * a2 = (const double *) b;

    if (*a1 < *a2)
        return -1;
    else if (*a1 == *a2)
        return 0;
    else
        return 1;
}
//display array
void display(double arr[],int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%.2f ",arr[i]);
    }
}


int main(){

    double ar[N];
    fillarray(ar,N);
    display(ar,N);
  
//print sort array with qsort
    qsort(ar,N,sizeof(double),cmpfunc);
    printf("\n");
    display(ar,N);

    return 0;
}
