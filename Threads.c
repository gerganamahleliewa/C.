#include <stdio.h>
#include <sys/types.h>
#include <pthread.h>

void *routine()
{
    printf("Test from threads %d\n",getpid());
    sleep(3);
    printf("Ending thread");
}

int main(){
    pthread_t t1,t2;
   if( pthread_create(&t1,NULL,&routine,NULL) != 0)
   {
       return 1;
   }
    if( pthread_create(&t2,NULL,&routine,NULL) != 0)
    {
        return 1;
    }
   if( pthread_join(t1,NULL) != 0)
   {
       return 2;
   }

    return 0;
}
