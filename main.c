#include <stdio.h>
#include <math.h>

int main()
{
double r,area,circ; // I defined radius, area, and circumference
printf("enter the radius of the circle:");
scanf("%lf",&r); // radius you entered
area=M_PI*r*r; // calculates the area
circ=M_PI*r*2; // calculates the circumference 
printf("the area of circle with radius %.2lf is %2.lf\n",r,area);
printf("the circumference of circle with radius %.2lf is %.2lf\n",r,circ);
printf("radius: %.2lf,\n area: %.3lf, \n circumference: %lf",r,area,circ);
    return 0;
}
