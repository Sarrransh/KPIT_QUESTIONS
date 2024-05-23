// Write a program to check whether a triangle is valid or not, if three 
// angles of the triangle are entered through the keyboard. A triangle 
// is valid if the sum of all the three angles is equal to 180 degrees. 

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Input a : ");
scanf("%d",&a);
printf("Input b : ");
scanf("%d",&b);
printf("Input c : ");
scanf("%d",&c);
if(a+b+c==180){
    printf("valid triangle");
}else{
    printf("not a valid triangle");
}

 return 0;
}