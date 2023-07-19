#include <stdio.h>
#include <math.h>


void rotate_left(unsigned int x, unsigned char n)
{
    //find size of x in bits
     unsigned char size = sizeof(x) * 8;

     int mask = size - n;
     //search for rotating 
     int rotating = x << n | x >> mask;
     printf("%X",rotating);

}

int main() {


    //call function
    rotate_left(0x12345678,2);

    return 0;

}
