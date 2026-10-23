#include<stdio.h>
int main()
{
    int l=2,b=2,area;
    float perimeter;
    area=l*b;
    perimeter=2*(l+b);
    printf("area of rectangle = %d",area);
    printf("\n perimeter of rectangle = %.2f",perimeter);
    return 0;
}