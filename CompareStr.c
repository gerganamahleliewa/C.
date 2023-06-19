#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//create function
void  Compare(char *text1, char *text2)
{
    int flag = 0,i=0;
  
//wgile they are not equal to the end of string
    while(text1[i] != '\0'  || text2[i] !='\0')
    {
//if every index in any text are not equal they are not compare
        if(text1[i] != text2[i])
        {
            flag=1;
        }
        i++;

    }

    if(flag == 0)
    {
        printf("Compare!");
    }
    if(flag == 1)
    {
        printf("Not compare!");
    }


}

int main() {

    char text[]="Hello!";
    char text2[]="Hello";
  
  //call function
    Compare(text,text2);

    return 0;
}


