#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

//global variable that is only accessibility inside this file
static double num = 4.2;

//global variable that is accessibility within the entire program
float x;

int main() {

    //variable with block scope and temporary storage
    auto int var = 10;

    //variable with permanent storage
    static float y;

    //register int variable
    register int n;

    return 0;
}
//function that is only accessible with the file it is defined
static int func();


