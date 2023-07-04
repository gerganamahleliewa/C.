#include <stdio.h>
#include <stdlib.h>

void allocatedMemory(int **ptr)
{
  //aloccated memory for *p pointer
    *ptr =(int *) malloc(sizeof(int));

}

int main(){
    int *p = NULL;
  
    allocatedMemory(&p);
  
    *p = 25;
    printf("%d",*p);

    free(p);
  
    return 0;
}
