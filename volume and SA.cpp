#include <stdio.h>
int main()
{
float radius, height,volume, surfacearea,pi=3.142;


printf("enter the radius:\t");
scanf("%f",&radius);
printf("enter the height:\t");
scanf("%f",& height);

volume= pi*radius*radius*height;
surfacearea=2*pi*radius*height+2*pi*radius*radius;

printf("volume %.2f\n",volume);
printf("surface area %.2f\n",surfacearea);

return 0;
}


