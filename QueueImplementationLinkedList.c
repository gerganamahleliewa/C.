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


typedef struct node{
    int data;
    struct node*next;
}Node;

//front point ot first element
Node *front = NULL;
//rear point to last element
Node *rear = NULL;

//insert node 
void Enqueue(int number)
{
    Node *newNode = (Node *) malloc(sizeof (Node));
    newNode->data = number;
    newNode->next = NULL;
    if(front == NULL && rear == NULL)
    {
      //they start together
       front = rear = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode;
    }
}
void display()
{
   Node* temp;

   if(front == NULL && rear ==NULL)
   {
       printf("It is empty!");
   }
   else
   {
       temp = front;
       while(temp != NULL)
       {
           printf("%d ",temp->data);
           temp = temp->next;
       }
   }
}
//delete node
void Dequeue()
{
    Node *del;
    if(front == NULL && rear ==NULL)
    {
        printf("It is empty!");
    }
    else{
        del = front;
        front = front->next;
        free(del);
    }
}
/print front element
void Peek()
{
    if(front == NULL && rear ==NULL)
    {
        printf("It is empty!");
    }
    else{
        printf("\nPeek number is  = %d\n",front->data);
    }
}

int main(){

    Enqueue(5);
    Enqueue(8);
    Enqueue(9);
    Enqueue(4);
    Enqueue(3);
    Peek();
    display();

    Dequeue();
    printf("\n");
    display();
    Peek();

    return 0;
}
