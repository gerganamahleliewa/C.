#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declariotion function
int Even();

int main() {

   int n;

    printf("Enter number:");
    scanf("%d",&n);

  //printf result
    printf("count=%d", Even());



    return 0;
}

int Even()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    if(num == -1)
        return 0;

    if(num%2==0)
        return num + Even();
    return Even() ;
}

