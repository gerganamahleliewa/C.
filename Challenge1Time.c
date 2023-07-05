#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    int i ;
    srand(time(NULL));
    printf("%d\n", 50);

    for (i = 1; i <= 50; i++) {
        printf("%0.4lf\n", (rand() % 2001 - 1000) / 2.e3);
    }

    return 0;
}
