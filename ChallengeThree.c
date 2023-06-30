#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

struct MyArray{
    int length;
    int arr[];
};


int main() {
   struct MyArray* array;
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
  
//allocated memory based on size input from the user
    size_t s = sizeof(struct MyArray);
    array =(struct MyArray*) malloc(s + size*sizeof (struct MyArray));

    array->length = size;
    array->arr[0] = 5;
    array->arr[1] = 1;
    printf("Array:\n%d %d",array->arr[0],array->arr[1]);
    free(array);

    return 0;
}

