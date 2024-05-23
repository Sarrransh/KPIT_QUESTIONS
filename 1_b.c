#include <stdio.h>

int main()
{
    float l, b, r;
    
    printf("Enter rectangle's length: ");
    scanf("%f", &l); 
    
    printf("Enter rectangle's breadth: ");
    scanf("%f", &b); 
    
    printf("Enter circle's radius: ");
    scanf("%f", &r); 
    
    printf("Area of rectangle: %.2f, Perimeter of rectangle: %.2f\n", l * b, 2 * (l + b));
    printf("Area of circle: %.2f, Circumference of circle: %.2f\n", 3.14 * r * r, 2 * 3.14 * r);
    
    return 0; 
}
