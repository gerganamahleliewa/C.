#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef struct {
    int leftX;
    int bottomY;
    int width;
    int height;
} Rectangle;

Rectangle find(Rectangle rec1, Rectangle rec2,Rectangle rec3)
{
  //to find width and height for rectangle 3
    if(rec1.bottomY >= rec2.bottomY)
    {
        rec3.width = rec2.width;
        rec3.height = rec1.height;
    }else {
        rec3.width = (rec2.width ) - rec1.leftX;
        rec3.height = (rec1.height + rec1.bottomY) - rec2.bottomY;
    }

  //if width or height are negative number,they are not cross
    if(rec3.height <= 0 || rec3.width <= 0)
    {
        printf("They are not cross each other!");
    }
    else{
      //they are cross
        printf("Width of new rectangle = %d\n",rec3.width);
        printf("Height of new rectangle = %d\n",rec3.height);
    }

  //find coordinates for rectangle 3
        if(rec1.leftX >= rec2.leftX && rec1.bottomY >= rec2.bottomY)
        {
            printf("A(%d;%d)\n",rec1.leftX,rec1.bottomY);
        }
        else if((rec1.leftX <= rec2.leftX && rec1.bottomY >= rec2.bottomY))
        {
            printf("(%d;%d)",rec2.leftX,(rec1.bottomY));
        }
        else if((rec1.leftX >= rec2.leftX && rec1.bottomY <= rec2.bottomY))
        {
            printf("(%d;%d)",rec1.leftX,(rec2.bottomY));
        }
        else
        {
            printf("A(%d;%d)\n",rec2.leftX,rec2.bottomY);
        }
    }

    return rec3;
}



int main() {
    Rectangle  rec1,rec2,rec3;

    printf("Enter Width of Rectangle1 :");
    scanf("%d",&rec1.width);

    printf("Enter Height of Rectangle1 :");
    scanf("%d",&rec1.height);

    printf("Enter X and Y of Rectangle1 :");
    scanf("%d %d",&rec1.leftX,&rec1.bottomY);

    printf("Enter Width of Rectangle2 :");
    scanf("%d",&rec2.width);

    printf("Enter Height of Rectangle2 :");
    scanf("%d",&rec2.height);

    printf("Enter X and Y of Rectangle2 :");
    scanf("%d %d",&rec2.leftX,&rec2.bottomY);

    find(rec1,rec2,rec3);



    return 0;
}








