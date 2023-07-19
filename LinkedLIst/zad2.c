#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

//create struct node
typedef struct node
{
    int data;
    struct node* next;
}Node;

//create function for input numbers in linked list
Node *createLinkedList()
{
    Node *head;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;
  
//allocated memory for each of them
    one = (Node*) malloc(sizeof (Node));
    two = (Node*) malloc(sizeof (Node));
    three = (Node*) malloc(sizeof (Node));

  //Enter elements
    printf("Enter number:");
    scanf("%d",&one->data);

    printf("Enter number:");
    scanf("%d",&two->data);

    printf("Enter number:");
    scanf("%d",&three->data);
  
//find next
    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    return head;
}

//create function to return number 
int GetNth(Node *head,int index)
{
  
    int countIndex = 0;
    Node *current = head;

    while(current != NULL)
    {
        if(countIndex == index)
            return (current->data);
        countIndex++;
        current = current->next;
    }
    
  //Assertion failed if index is bigger than 3 or smaller than 1
    assert(index > 1);
    assert(index < 3);

}

int main() {

//call functions
    Node *p=createLinkedList();
    printf("Number is  = %d",GetNth(p,2));

    return 0;
}
