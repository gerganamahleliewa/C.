#include <stdio.h>
#include <math.h>
#include <ctype.h>



int main() {


    int arr[3][3];
// to input from user value of array
    for(int i = 0; i < 3;++i)
    {
        for(int j = 0; j < 3 ;++j)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d ",&arr[i][j]);
        }

    }

  //to print 2D array
    for(int i = 0; i < 3;++i)
    {
        for(int j = 0; j < 3 ;++j)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }

    return 0;

}
