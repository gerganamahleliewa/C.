#include <stdio.h>
#include <math.h>
#include <ctype.h>

char toUpper(char alpha,char alpha2,char alpha3)
{
   int hundreds,tens,units,final;
    if(alpha >= 48 &&  alpha <= 57)
    {
        //alpha with ASCII - zero ASCII
        hundreds=alpha -'0';

    }

    if(alpha2 >= 48 && alpha2 <= 57)
    {
        tens=alpha2-'0';

    }
    if(alpha3 >= 48 && alpha3 <= 57)
    {
        //51-48=3 and printf 3
        units=alpha3-'0';

    }
//sum 1 * 100 +  2 * 10 + 3 * 1 = 123
final=hundreds*100+tens*10+units*1;
    return final;


}

int main() {
  
//call function
    printf("%d",toUpper('1','2','3'));

    return 0;

}
