// Given a point (x, y), write a program to find out if it lies on X-axis, Y
// axis or origin. 

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the points : ");
scanf("%d",&a);
scanf("%d",&b);
if(a==0 & b==0){
    printf("pt lies on the origin ");
}
else if (a==0)
{
    printf("pt is on y axis ");
}
else if (b==0)
{
    printf("pt is on x axis ");
}
else {
    printf("pt is somewhere on the plane");
}


 return 0;
}