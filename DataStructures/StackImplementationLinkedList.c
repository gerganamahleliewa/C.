#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <time.h>


typedef struct node{
    int data;
    struct node* next;
}Node;

Node* top = NULL;

//push node in stack
void push(int number)
{
    Node* newNode = (Node *) malloc(sizeof(Node));
    newNode->data = number;
    newNode->next = top;//prev adress
    top = newNode;
}

//print top element
void peek()
{
    if(top == NULL)
    {
        printf("...");
    }
    else
    {
        printf("Top element is = %d",top->data);
    }
}
//remove top element
void pop()
{
    Node *temp = top;
    printf("Pop element is  = %d\n",top->data);
    top = top->next;
    free(temp);

}

void display()
{
    Node *temp = top;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp =temp->next;
    }
}

int main(){


    push(1);
    push(2);
    push(3);
    push(4);
    display();
    printf("\n");
    pop();
    display();


    return 0;
}
