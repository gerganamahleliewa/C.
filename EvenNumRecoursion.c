#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int Even();

int main() {

   int n;

    printf("Enter number:");
    scanf("%d",&n);

  //print result
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
// if num % 2 ==0 is even and search count of even number
    if(num%2==0)
        return 1 + Even();
    return Even();
}

