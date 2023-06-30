#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

int sum(int num)
{
    static int x=0;
  //0+25=> 25+15 => 40+30
    x+=num;
    return x;
}

int main() {

    printf("%d ",sum(25));
    printf("%d ",sum(15));
    printf("%d ",sum(30));


    return 0;
}

