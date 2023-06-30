#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>



int main() {

    size_t size;
    printf("Enter size:");
    scanf("%zd",&size);

    int arr[size],sum = 0;

    for(int i = 0;i<size;++i)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum = %d",sum);

    return 0;
}

