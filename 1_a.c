#include <stdio.h>
int main()
{
    printf("Enter temperature in Fahrenhite : ");
    float f;
    scanf("%f",&f);
    float c = (f-32)*5/9;
    printf("Temperature in centigrades : %.2f\n",c);
    return 0;
    
}

