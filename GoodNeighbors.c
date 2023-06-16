#include <stdio.h>
#include <math.h>
#include <ctype.h>



int main() {

int arr[5];
int flag=0;
  //input from user number in array
        for(int i= 0; i < 5 ;++i) {
              printf("Enter number:");
              scanf("%d",&arr[i]);

        }
//check if they are neighbors or not
        for(int i= 1; i < 4 ;++i) {
             if(arr[i] == (arr[i - 1] * arr[i + 1]))
             {
               
                 flag=1;

             }

       }
//check if flag == 1 or flag == 0
        if(flag==1)
    {
        printf("Good neighbors!");
    }
    else if(flag==0)
    {
        printf("Not good neighbors!");
    }

    return 0;

}
