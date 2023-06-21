#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

Node *creteLinkedList()
{
    Node *head ;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
//allocated memory for each of them
    one = (Node *) malloc(sizeof (Node));
    two = (Node *) malloc(sizeof (Node));
    three = (Node *) malloc(sizeof (Node));

//Enter number from user
    printf("Enter number:");
    scanf("%d",&one->data);

    printf("Enter number:");
    scanf("%d",&two->data);

    printf("Enter number:");
    scanf("%d",&three->data);

    one->next = two;
    two->next = three;
    three->next = NULL;


    return one;

}

//create Count funtion 

int Count(Node *head,int num)
{
    Node* current = head;
    int count = 0;
  
  //while last element in linked list
    while(current != NULL)
    {
        //printf("%d ",current->data);
        current = current->next;
      
        if(current->data == num ) {
            ++count;
        }
        printf("\nCount of number = %d ",count);
    }
    return count;
}

int main() {

  /call function
    Node *p=creteLinkedList();
    
   printf("%d",Count(p,2)) ;


    return 0;
}



