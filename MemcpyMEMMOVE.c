#include <stdio.h>
#include <string.h>

//funvtion to print array
void show(int *ar)
{
    for(int i = 0 ; i<10;++i)
    {
        printf("%d ",ar[i]);
    }
}


int main(){

    int values[10] = {1,2,3,4,5,6,7,8,9,10};
    int target[10];

//used memcpy()
    memcpy(target,values,10*sizeof (int));
    printf("Original:\n");
    show(values);
    printf("\nCopy:\n");
    show(target);
  
//used memmove()
    memmove(target,values +1 ,7*sizeof (int));
    printf("\nOriginal:\n");
    show(values);
    printf("\nCopy:\n");
    show(target);
    return 0;
}
