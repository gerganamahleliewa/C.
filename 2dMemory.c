#include <stdio.h>
#include <math.h>
#include <ctype.h>



int main() {


    int arr[3][2]={{1,5},{5,9},{8,3}};

    for(int i=0;i<3;++i)
    {
        for(int j=0;j<2;++j)
        {
          //print address 
            printf("%lu\n",&arr[i][j]);
        }
    }

    return 0;

}
