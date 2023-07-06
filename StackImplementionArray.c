#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//#define NDEBUG
#include <assert.h>
//#include <complex.h>
//#include <setjmp.h>
//#include <stdarg.h>
//#include <stdnoreturn.h>
#include <time.h>
#define N 5

int stack[N];
int top = -1;

//eneter element in stack
void Push( )
{
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(top == N-1)
    {
        printf("Overflow!");
    }
    else{
        top++;
        stack[top] = x;
    }
}
//pop element in stack
void Pop()
{
    int item ;

    if(top == -1)
    {
        printf("Underflow!");
    }
    else{
        item = stack[top];
        top--;
    }
    printf("Pop element is = %d",item);

}
//print the top element in stack
void Peek()
{
    if(top == -1)
    {
        printf("Stack is empty!");
    }
    else{
        printf("Top element in stack  = %d",stack[top]);
    }
}
//display stack
void display()
{
 for(int i = top; i >= 0;--i)
 {
     printf("%d ",stack[i]);

 }
}

int main(){

    Push();
    Push();
    Push();
    Push();
    Push();
    display();

    Pop();
    printf("\n");
    display();

    return 0;
}
