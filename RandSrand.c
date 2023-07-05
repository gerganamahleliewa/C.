#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){

    srand(time(0));

    for(int i = 0 ;i<5;++i)
      //print number in range of 2 to 5
        printf("%d ",rand() % 5 + 2);


    return 0;
}
