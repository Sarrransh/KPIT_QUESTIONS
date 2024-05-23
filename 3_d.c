// Write a program to find the absolute value of a number entered 
// through the keyboard. 

#include<stdio.h>
int main()
{
    int a;
printf("enter : ");
scanf("%d",&a);
if(a<0){
    printf("%d",-a);
}else{
printf("%d",a);
 }return 0;
}