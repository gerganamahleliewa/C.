#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define SIZE 5


int main() {

    int arr[SIZE];
    int flag=0;

    for(int i = 0;i < SIZE;++i)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
//check example: 13231 -> 1==1 -> 3==3..
        if(arr[i] == arr[SIZE - 1 ])
        {
            flag=1;
        }

    }
    if(flag==1)
    {
        printf("The array is palindrome!");
    }
    else if(flag==0)
    {
        printf("The array is NOT palindrome!");

    }
    return 0;
}
