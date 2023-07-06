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

int queue[N];
int front = -1,rear = -1;

//insert elements in queue
void Enqueue(int number)
{
    if(rear == N-1)
    {
        printf("Overflow...\n");
    }
    else if(rear == -1 && front == -1)
    {
        front = rear = 0;
        queue[rear] = number;
    }else
    {
        rear++;
        queue[rear] = number;
    }
}
//deletion first element in queue
void Dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("It is empty...");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else{
        printf("\nDequeue element is = %d\n",queue[front]);
        front++;
    }
}
//print front element
void Peek()
{
    if(front == -1 && rear == -1)
    {
        printf("It is empty...");
    }
    else
        printf("\nPeek element is = %d\n",queue[front]);
}
void display()
{
    if(front == -1 && rear == -1)
    {
        printf("It is empty...");
    }
    for(int i = front; i < rear+1;++i)
    {
        printf("%d ",queue[i]);
    }
}

int main(){

    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    display();
    Peek();

    Dequeue();
    printf("\n");
    display();
    Peek();

    return 0;
}
