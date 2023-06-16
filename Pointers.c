#include <stdio.h>
#include <math.h>
#include <ctype.h>



int main() {

    int a=9,b=6;
    int *p=&a;
    int *ptr=&b;
//print adress and value of a
    printf("%p\n",p);
    printf("%d\n",*p);
    //printf adress and value of b
    printf("%p\n",ptr);
    printf("%d",*ptr);



    return 0;
}
