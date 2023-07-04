#include <stdio.h>
#include <math.h>
#include <ctype.h>


union car{
    int i;
    float f;
    char c[40];
}car1,car2,*car3;

int main(){
//memory of union is largest member in union
    printf("Memory size occupied by data: %zu",sizeof (car1));


    return 0;
}
