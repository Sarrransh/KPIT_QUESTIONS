// According to Gregorian calendar, it was Monday on the date 
// 01/01/01. If any year is input through the keyboard write a program 
// to find out what is the day on 1st January of this year.
int isleapyear(int year){
    if(year%400==0){
        return 1;
    }
    else if(year%100==0){
        return 0;
    }else if(year%4==0){
        return 1;
    }else {
        return 0;
    }
}
#include<stdio.h>
int main()
{
    int year;
    printf("input year ");
scanf("%d",&year);
int days=0;
for (int i = 1; i < year; i++)
{
    if (isleapyear(i)==1)
    {
        days = days + 366;
    }
    else 
    {
        days = days + 365;
    }
    
    
}
printf("days %d\n",days);
days = days %7;


    if (days==0)
    {
        printf("Monday");
    }else if (days==1)
    {
        printf("Tuesday");
    }else if(days==2){
        printf("Wednesday");
    }else if (days==3)
    {
        printf("Thursday");
    }else if (days==4)
    {
        printf("Friday");
    }else if (days==5)
    {
        printf("Saturday");
    }else if (days==6)
    {
        printf("Sunday");
    }
    
 return 0;
}