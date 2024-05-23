
// Given the coordinates (x, y) of center of a circle and its radius, write 
// a program that will determine whether a point lies inside the circle, 
// on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) 
// functions) 

#include<stdio.h>
#include<math.h>
int main()
{
    int c1,c2,r;
    printf("enter circle coordinates and radius ");
    scanf("%d",&c1);
    scanf("%d",&c2);
    scanf("%d",&r);

    int x,y;
    printf("enter the point coordinates ");
    scanf("%d",&x);
    scanf("%d",&y);

    if (sqrt((c1-x)*(c1-x)+(c2-y)*(c2-y))<r)
    {
        printf("point lies inside the circle ");
    }
    else if(sqrt((c1-x)*(c1-x)+(c2-y)*(c2-y))>r){
        printf("point lies outside of the circle ");
    }
    else{
        printf("point lies on the circle");
    }
    

 return 0;
}