#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


typedef struct node
{
    int data;
    struct node* next;
}Node;

Node *createNode(int data)
{
    Node *newNode = (Node *) malloc(sizeof (Node));
    newNode->data = data;
    newNode->next = NULL;

  return newNode;
}
void Append(Node** aRef, Node** bRef){
//if A lsit is empty to print B
    if(aRef == NULL)
    {
        aRef = bRef;
    }
    if(bRef == NULL)
    {
        bRef = aRef;
    }
  //if two of them are not empty A list to linked to B lsit and B list next point to zero
    if(aRef != NULL && bRef != NULL)
    {
        (*aRef)->next= (*bRef );
        (*bRef)->next = NULL;
    }

}


void printList(Node* head)
{
    Node *current = head;
    while (current!= NULL) {
        printf("%d ",current->data);
        current = current->next;
    }

}

int main() {

    Node *a = createNode(1);//first list
    Node *b= createNode(2);//second list
  
    Append(&a, &b);//append two list
    printList(a);


    return 0;
}
