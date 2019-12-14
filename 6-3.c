#include<stdio.h>

int main()
{
    char letter;
    printf("please enter an uppercase character: ");
    scanf("%c", &letter);
    if ((letter>='A')&&(letter<='Z'))
    {
	letter += 'a' - 'A';
	printf("the lowercase is %c\n", letter);
    }
    else
	printf("You did not enter an uppercase character!!!\n");
    return 0;
}
