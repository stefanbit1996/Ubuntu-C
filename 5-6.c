#include<stdio.h>

int main()
{
	float radius = 2.5;
	int height = 3;
	float circumference, area, volumn;
	float pi = 3.1415;
	circumference = 2 * pi * radius;
	area = pi * radius * radius;
	volumn = area * height;
	printf("\ncircumference = %.2f, area = %.2f, volumn = %.2f\n", circumference, area, volumn);
	return 0;
}
