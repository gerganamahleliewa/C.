#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
//#define NDEBUG
#include <assert.h>
//#include <complex.h>
//#include <setjmp.h>
//#include <stdarg.h>
//#include <stdnoreturn.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>
#include <omp.h>

int primes[10]={2,3,5,7,11,13,17,19,23,29};

//create void function and void pointer
void* routine(void* arg)
{
    int index = *(int*) arg;
    printf("%d ",primes[index]);
    free(arg);
}


int main(){
  
   pthread_t th[10];
   int i;
   for( i =0;i < 10;++i)
   {
       int *a = malloc(sizeof (int));
       *a = i;
       if(pthread_create(&th[i],NULL,&routine,a) != 0)
       {
           perror("Failed to create...");
       }
   }
    for( i = 0 ;i < 10;++i)
    {
        if(pthread_join(th[i],NULL) != 0)
        {
            perror("Failed to join...");
        }
    }

    return 0;
}
