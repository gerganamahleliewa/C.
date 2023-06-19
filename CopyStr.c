#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//create function
void Strcpy(char *name,char *copy,int size)
{
  //copied one string from another
    for(int i = 0;i < size; ++i ) {
      
        copy[i] = name[i];
    }
    printf("Copied name: %s ",copy);

}

int main() {

    char name[]="Gergana";
    char copyName[20];
  
  //printf first string 
    printf("Name: %s\n",name);
  
//call function and print copied string
    Strcpy(name,copyName,20);

    return 0;
}

