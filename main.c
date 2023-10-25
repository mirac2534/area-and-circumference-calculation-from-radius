#include <stdio.h>
#include <math.h>

int main()
{
double r,area,circ;
printf("enter the radius of the circle:");
scanf("%lf",&r);
area=M_PI*r*r;
circ=M_PI*r*2;
printf("the area of circle with radius %.2lf is %2.lf\n",r,area);
printf("the circumference of circle with radius %.2lf is %.2lf\n",r,circ);
printf("radius: %.2lf,\n area: %.3lf, \n circumference: %lf",r,area,circ);
    return 0;
}
