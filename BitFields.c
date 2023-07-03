#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <complex.h>

//line styles
#define SOLID 0
#define DOTTED 1
#define DASHED 2

//primary colors
#define BLUE  4
#define  GREEN 2
#define  RED 1

//mixed colors
#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define WHITE (RED | GREEN | BLUE)

struct box{
    bool opaque :1;//width of bit fields
    unsigned int fill :3;
    unsigned int :4;
    bool show :1;
    unsigned int border :3;
    unsigned int style  :2;
};

const char *color[8] = {"black","red","green","yellow","blue","magenta","white","cyan"};

//to print information for box
void display(struct box *pb)
{
    printf("Box is %s\n",pb->opaque == true ? "opaque": "transparent");
    printf("The Fill color is %s\n",color[pb->fill]);
    printf("Border is %s\n",pb->show == true ? "shown":"not shown");
    printf("The border color is %s\n",color[pb->border]);
    printf("The border style is ");

    switch(pb->style)
    {
        case SOLID:
            printf("solid.\n");
            break;
        case DOTTED:
            printf("dotted.\n");
            break;
        case DASHED:
            printf("dashed.\n");
            break;
        default:
            printf("unknown type.\n");

    }
}

int main() {

    struct  box b = {true,YELLOW, true,GREEN,DASHED};
    display(&b);

    return 0;
}

