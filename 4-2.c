#include<stdio.h>
#include<float.h>

int main()
{
	float radius, diameter;
	float circumference, area;
	float pi = 3.1415926;
	printf("The diameter = ");
	scanf("%f", &diameter);
	printf("\n");
	circumference = pi * diameter;
	radius = diameter / 2;
	area = pi * radius * radius;
	printf("the radius = %.2f\n", radius);
	printf("the circumference = %.2f\n", circumference);
	printf("the area = %.2f\n", area);
	return 0;
}
