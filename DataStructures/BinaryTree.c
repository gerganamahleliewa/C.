#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node *left,*right;
}Node;

Node *createTree()
{
    int number;
    Node *newNode = (Node *) malloc(sizeof (Node));
    printf("Enter number:");
    scanf("%d",&number);
    if(number == -1)
    {
        return 0;
    }
  //enter root
    newNode->data = number;
  
  //enter left child whiele number is != -1
    printf("Enter left child of %d:",number);
    newNode->left = createTree();

    printf("Enter right child of %d:",number);
    newNode->right = createTree();

    return newNode;
}


int main(){

    Node *root = createTree();

    return 0;
}
