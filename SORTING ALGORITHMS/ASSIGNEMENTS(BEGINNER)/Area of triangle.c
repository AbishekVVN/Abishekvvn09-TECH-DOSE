#include <stdio.h>
int main()
{
  float a,b,c,s,areal
    printf("Enter three sides of Triangle\n");
  scanf("%f%f%f,&a,&b,&c);
        s=(a+b+c)/2;
           area = sqrt(s*(s-a)*(s-b)*(s-c));
 
    printf("\n Area of triangle: %.2f\n",area);
 
    return 0;
}
