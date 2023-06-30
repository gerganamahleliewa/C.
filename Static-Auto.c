#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

void fun()
{
    static int count = 0;
    auto int nextCount = 0;//auto variables not change

    printf("Static = %d, auto = %d\n",count,nextCount);
    ++nextCount;
    count++;

}

int main() {

    for(int i = 0;i<4;i++)
    {
        fun();

    }

    return 0;
}



