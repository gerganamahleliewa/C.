#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



int main() {


    int count[3]={0},i=0;
    int arr[8]={0,2,0,0,0,1,1,2};

    while(i < 8)
    {
      //count if find 0,1,2
        count[arr[i]]++;
        i++;
    }
    printf("%d\n",count[2]);

    return 0;
}
