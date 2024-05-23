// If ages of Ram, Shyam and Ajay are input through the keyboard, 
// write a program to determine the youngest of the three. 

#include<stdio.h>
int main()
{int r,s,a;
scanf("%d",&r);
scanf("%d",&s);
scanf("%d",&a);
if(r<a && r<s){
    printf("ram is smallest");
}
if(s<a && s<r){
    printf("sham is smallest");
}
if(a<r && a<s){
    printf("ajay is smallest");
}
 return 0;
}