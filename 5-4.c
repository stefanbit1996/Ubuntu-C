#include<stdio.h>

int main()
{
	char c1, c2;
	printf("Please enter thr capital character: ");
	scanf("%c", &c1);
	c2 = c1 + 32;
	printf("\n%c\n", c2);
	return 0;
}
