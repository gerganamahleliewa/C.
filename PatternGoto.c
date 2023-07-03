#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <complex.h>


int main() {

   int value = 18;
   int i= 1,j,k=0;

    loop:
      if(i < value) {
         j = i;
          innerLoop:
          if (j < value) {
              printf(" ");
              ++j;
              goto innerLoop;
          }
          else {
              loop2:
              if (k != (2 * i)) {
                  if (k == 0 || k == (2 * i) - 3) {
                      printf("*");
                  }
                  printf(" ");
                  k++;
                  goto loop2;
              }
              k=0;
              printf("\n");
              i++;
              goto loop;
          }


      }
      else{
          i = 0;
          loop3:
          if(i < (2*value)-1)
          {
              printf("*");
              ++i;
              goto loop3;
          } 
      }


    return 0;
}

