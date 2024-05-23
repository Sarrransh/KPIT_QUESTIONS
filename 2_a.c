#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
int sum=0;
while(a!=0)
{
    int k= a%10;
    
    sum = sum + k;
    
    a=a/10;
}

printf("%d",sum);
 return 0;
}