#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("Enter the coordinates X: ");
scanf("%f",&x);
printf("Enter the coordinates Y: ");
scanf("%f",&y);
printf("r = %.2f and Phi = %.2f", sqrt(x*x+y*y),atan2(y,x) );

//printf();
 return 0;
}