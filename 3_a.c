// A five-digit number is entered through the keyboard. Write a 
// program to obtain the reversed number and to determine whether 
// the original and reversed numbers are equal or not. 


#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    
    printf("Input : ");
scanf("%d",&a);
int count=0;
int k=a;
while(k!=0)
{
    count++;
    k=k/10;
}
k=a;
int na=0;
for (int i = count+1; i > 1; i--)
{
    na= na + (k%10)*pow(10,-1+i);
    k=k/10;
}
na=na/10;



printf("Inverse number : %d\n",na);
if (na==a)
{
printf("Equal");
}
else{
    printf("Not equal");
}

 return 0;
}