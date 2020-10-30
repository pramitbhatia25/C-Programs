#include <stdio.h>

void main(){

double x1, y1, x2, y2, x3, y3;

printf("Enter coordinates x1, y1: \n");
scanf("%lf %lf", &x1, &y1);

printf("Enter coordinates x2, y2: \n");
scanf("%lf %lf", &x2, &y2);

printf("Enter coordinates x3, y3: \n");
scanf("%lf %lf", &x3, &y3);


if( ((y2-y1)/(x2-x1)) == ((y3-y2)/(x3-x2)) || ((y2-y1)/(x2-x1)) == ((y3-y1)/(x3-x1)) || ((y3-y2)/(x3-x2)) == ((y3-y1)/(x3-x1)) )
{

printf("The Triangle Is Not Possible\n");

}
else
{

printf("The Triangle Is Possible\n");

}

}
