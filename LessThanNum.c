#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int receive(int number);

int main() {

    int num;

    printf("Enter number:");
    scanf("%d",&num);
//print count of numbers under num
printf("Count = %d", receive(num));


    return 0;
}

int receive(int number)
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
// while num is != -1 
        if(num == -1)
            return 0;

        if(number > num)
            return 1 + receive(number);

        return receive(number);

}

