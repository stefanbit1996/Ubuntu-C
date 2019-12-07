#include<stdio.h>
#include<float.h>
int main()
{
    double cardnum;
    char name[20];  //这个就是定义了一个字符串数组，可以容纳20字符
    printf("**********************************************************\n");
    printf("********Welcome to the books management system************\n");
    printf("**********************************************************\n");
    printf("~~~~~~~~~\t\t\t\t~~~~~~~~~~~~~~\n");
    printf("Please input your card number:\n");
    scanf("%lf",&cardnum);
    printf("Please input your name:\n");
    scanf("%s",name);
    printf("\nWelcome，%s！Your card number is：%.0lf\n",name,cardnum);

    return 0;
}
