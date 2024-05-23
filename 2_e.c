#include<stdio.h>
#include<math.h>
int main()
{
    int a;
scanf("%.2f",&a);
a = a * M_PI / 180.0; 
printf("sin : %.2f\n",sin(a));
printf("cos : %.2f\n",cos(a));
printf("tan : %.2f\n",tan(a));
printf("cot : %.2f\n",1/tan(a));
printf("sec : %.2f\n",1/sin(a));
printf("cosec : %.2f\n",1/cos(a));
 return 0;
}