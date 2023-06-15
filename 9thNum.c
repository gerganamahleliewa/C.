#include <stdio.h>
#include <math.h>

int nineNumber(int length)
{
    int num=0;
    for(int i=0;i<length;++i)
    {
      //0+0+9-> 9=90+9 -> 99=990+9.....
        num=num*10+1;
    }
    return num;
}

int main() {

   printf("%d", nineNumber(4));

    return 0;

}
