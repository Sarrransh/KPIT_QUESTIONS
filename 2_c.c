#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2;
    printf("Enter l1,l2,g1,g2 : ");

scanf("%f",&l1);

scanf("%f",&l2);

scanf("%f",&g1);


scanf("%f",&g2);
 l1 = l1 * M_PI / 180.0; 
     l2 = l2 * M_PI / 180.0;
     g1 = g1 * M_PI / 180.0;
     g2 = g2 * M_PI / 180.0;

float D=3963*(acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1)));
printf("Distance = %.2f",D);
 return 0;
}