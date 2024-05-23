
// Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to 
// check if the three points fall on one straight line. 
#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("enter pt 1  ");
    scanf("%d",&x1);
    scanf("%d",&y1);
    printf("enter pt 2 ");
    scanf("%d",&x2);
    scanf("%d",&y2);
    printf("enter pt 3 ");
    scanf("%d",&x3);
    scanf("%d",&y3);
    if (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2) == 0)
    {
        printf("collinear");
    }
    else{
        printf("not collinear");
    }
    

 return 0;
}