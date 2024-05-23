#include<stdio.h>
int main()
{
    float a=1189 , b=841;
    for (size_t i = 1; i <= 9; i++)
    {
        if (a>b)
        {
            a=a/2;
            printf("A%d = %.2fmm X %.2fmm\n",i,a,b);
            
        }
        else if (b>a)
        {
            b=b/2;
            printf("A%d = %.2fmm X %.2fmm\n",i,a,b);
            
        }
        
    }
    

 return 0;
}