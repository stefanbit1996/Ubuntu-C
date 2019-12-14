#include<stdio.h>
/*
    *
   ***
  *****
 *******
  *****
   ***
    *
this is the target output
*/
int main()
{
	int line;
	int n;
// upper
	for (line=1;line<=4;line++)
	{
		for(n=1;n<=5-line;n++)
		{printf(" ");}	
		for(n=1;n<=2*line-1;n++)
		{printf("*");}
	printf("\n");
	}
// lower
	for (line=5;line<=7;line++)
	{
		for(n=1;n<=line-3;n++)
		{printf(" ");}	
		for(n=1;n<=2*(8-line)-1;n++)
		{printf("*");}
	printf("\n");
	}
	return 0;
}

