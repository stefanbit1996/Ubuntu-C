#include<stdio.h>

int main()
{
	double num1 = 0.0;
	double num2 = 0.0;
	char operation;

	printf("PLEASE TYPE IN THE FORMULA.\nEXAMPLE: 5+3\nINPUT:\n");
	scanf("%lf%c%lf", &num1, &operation, &num2);

	switch(operation)
	{
		case '+':
			printf("=%lf\n", num1 + num2);
			break;
		case '-':
			printf("=%lf\n", num1 - num2);
			break;
		case '*':
			printf("=%lf\n", num1 * num2);
			break;
		case '/':
			if (num2 == 0)
				printf("\nError: divided by zero!\n");
			else
				printf("=%lf\n", num1 / num2);
			break;
		case '%':
			if (num2 == 0)
				printf("\nError: divided by zero!\n");
			else
				printf("=%ld\n", (long)num1 % (long)num2);
			break;
		default:
			printf("Invalid syntax!\n");
			break;
	}
	return 0;
}

