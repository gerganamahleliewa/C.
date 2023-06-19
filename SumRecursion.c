#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int sum(int n);

int main() {

    int n = 5;
    printf("Sum = %d",sum(n));

    return 0;
}

int sum(int n)
{
    while(n > 0)
    {
        return sum( n - 1 ) + n;
    }
}

