#include <stdio.h>
#include <math.h>
#include <ctype.h>

//create all operations
int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

int divv(int a, int b)
{
    return a/b;
}
// performs the given operation on elements of the arrays
int *performOp(int *a, int *b, int size,int (*f)(int, int))
{
    int *c = (int*) malloc(sizeof(int));

    for(int i = 0;i < size;++i)
    {
        c[i] = (*f)(a[i],b[i]);
    }
    return c;
}
// displays the elements of an array
void display(int *x,int size)
{
    for(int i =0;i<size;++i)
    {
        printf("%d ",x[i]);
    }
}
// Array of pointers to functions
int (*f[])(int,int)= {&add,&sub,&mult,&divv};

int main(){

    int arr1[]  = {10,5,6,9,3};
    int arr2[] = {45,8,2,11,23};
    int choice;

    printf("1.Add.\n");
    printf("2.Subtract.\n");
    printf("3.Multiply.\n");
    printf("4.Divide.\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
//size of array
    int size = sizeof(arr2)/sizeof(arr2[0]);
    int *result = performOp(arr1,arr2,size,f[choice-1]);
    switch (choice) {

        case 1:
            printf("Result is:\n");
            display(result,size);
            break;
        case 2:
            printf("Result is:\n");
            display(result,size);
            break;
        case 3:
            printf("Result is:\n");
            display(result,size);
            break;
        case 4:
            printf("Result is:\n");
            display(result,size);
            break;
        default:
            printf("No valid input...");
    }

    return 0;
}
