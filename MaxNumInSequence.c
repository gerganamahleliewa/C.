#include <stdio.h>
#include <math.h>
#include <ctype.h>
//#include <string.h>

//declaration function
int maxNum(int n);

int main() {

   int n;

    printf("Enter number:");
    scanf("%d",&n);

  //print max number 
    printf("Max= %d ", maxNum(n));


    return 0;
}
int maxNum(int n)
{
    int max;
    int numFromUser;

    printf("Enter number:");
    scanf("%d",&numFromUser);
  
//for example n = 3
    if(n > 1) {
// max = 2
        max = maxNum(n - 1);
     
//num from users = 1, 5, 9
      // check 9>2 -> max=9 => 5 > 9 => max= 9 => 1 > 9 => max numebr is 9
        if(numFromUser > max)
            return numFromUser;
        else
            return max;
    }
    return numFromUser;
}

