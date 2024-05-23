// Given the length and breadth of a rectangle, write a program to find 
// whether the area of the rectangle is greater than its perimeter. For 
// example, the area of the rectangle with length = 5 and breadth = 4 
// is greater than its perimeter. 

#include<stdio.h>
int main()
{
    int a,b;
printf("enter length : ");
scanf("%d",&a);

printf("enter breadth: ");
scanf("%d",&b);

if (a*b>2*(a+b))
{
    printf("area is bigger");
}
else if(a*b<2*(a+b)){
    printf("perimeter is bigger");
}
else{
    printf("both same");
}


 return 0;
}