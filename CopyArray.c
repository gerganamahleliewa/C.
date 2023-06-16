#include <stdio.h>
#include <math.h>
#include <ctype.h>



int main() {

//initializetion array
    int date[3] = {7, 5, 2023};
    int date2[3];
//copy array 
    for (int i = 0; i < 3; ++i)
    {
        date2[i]=date[i];
    }
//print array2 
    for (int i = 0; i < 3; ++i)
    {
        printf("%d ",date2[i]);
    }


    return 0;
}
