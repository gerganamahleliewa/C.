#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int Pell(int index);

int main() {

   int n;

    printf("Enter number:");
    scanf("%d",&n);

  //printf pell numbers like  0,1,2,5,12....
    for(int i = 0; i < n ;++i) {
        printf("%d ", Pell(i));
    }

    return 0;
}
int Pell(int index)
{
    if(index == 0)
        return 0;
    if(index == 1)
        return 1;
    if(index > 1)
      // return 2*1 + 0 ... 2*2 + 1.... and so on
        return 2*Pell(index -1) + Pell( index -2);
}
