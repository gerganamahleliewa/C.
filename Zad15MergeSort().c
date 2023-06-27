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
Node *createNode()
{
   Node *head;
   Node *one = NULL;
   Node *two = NULL;
   Node *three = NULL;

    one =(Node *)malloc(sizeof (Node *));
    two =(Node *) malloc(sizeof (Node *));
   three =(Node *)malloc(sizeof (Node *));

    printf("Enter number:");
    scanf("%d",&one->data);

    printf("Enter number:");
    scanf("%d",&two->data);

    printf("Enter number:");
    scanf("%d",&three->data);

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one ;

    return head;
}

Node *SortedMerge(Node *a, Node *b)
{
    if(a == NULL) {
        return b;
    }
    if(b == NULL) {
        return a;
    }
    Node *res= NULL;


     if(a->data <= b->data)
     {
         res = a;
         a->next = SortedMerge(a->next,b);
     }
     else
     {
         res = b;
         b->next = SortedMerge(a,b->next);
     }

    return res;
}

void FrontBackSplit(Node** head,Node **front,Node **back) {

    Node *current = *head;
    int length = 0;

//search length of node in linked list
    while (current != NULL) {
        current = current->next;
        length++;
    }
    //create another pointer to head
    Node *source = *head;

    //check if number of node is smallest of 2 to print only front
    if (length < 2) {
        *front = source;
        *back = NULL;
        return;
    }
  
    int size = (length-1)/2;
  
    (*front) = source;
    while(size > 0)
    {
        source = source->next;
        (*back) = source->next;
        --size;
    }
    source->next = NULL;
}
//funstion to print linked list
void printList(Node *head)
{
    Node * current = head;

    while (current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
}

void MergeSort(Node *head)
{
    Node *current = head;
    Node *a =NULL;//front linke list
    Node *b=NULL;//back linked list
    int temp;
  
    FrontBackSplit(&current,&a,&b);
  
    Node *i ,*j;

    // to sort 'a' list
    for(i = a; i != NULL; i = i->next)
    {
        for(j =i->next ; j!= NULL; j = j->next)
        {
           if(i->data > j->data) {
                temp = j->data;
                j->data = i->data;
                i->data = temp;
            }
        }
    }
  //call function sortedMerge and print result
    Node *p = SortedMerge(a,b);
    printList(p);

}

int main() {

    Node *a= createNode();
  
    MergeSort(a);
    return 0;
}



