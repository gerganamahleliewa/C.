#include <stdio.h>

int main() {

int x,y;
printf("Enter x and y:");
scanf("%d %d",&x,&y);

if(x>0 &&y>0)
{
printf("Quadrant 1!");
}
if(x<0 && y<0)
{
printf("Quadrant 2!");
}
if(x>0 && y<0)
{
printf("Quadrant 4");
}
return 0;
}
