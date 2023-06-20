#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>



int main() {

//create two counter
    int count1=0,count2=0,i=0;
    int arr[8]={0,1,0,1,0,1,1,0};

    while(i < 8)
    {
      //check if they are equal
        if(arr[i] == 0)
        {
            ++count1;
        }else{
            ++count2;
        }
        ++i;
    }
  //print result
    printf("%d\n",count2);

    return 0;
}


