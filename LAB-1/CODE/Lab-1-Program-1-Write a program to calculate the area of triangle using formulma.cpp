#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c,area;
    printf("Enter sides of the triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is: %f",area);
    return 0;
}
