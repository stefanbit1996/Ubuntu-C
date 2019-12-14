#include<stdio.h>

int main()
{
    float price = 3.5;
    float discount0 = 1;
    float discount1 = 0.95;
    float discount2 = 0.9;
    float discount3 = 0.85;
    int number;

    printf("Please enter the number you want to order: ");
    scanf("%d", &number);

    float discount;
    discount = (number>50)?discount3:((number>20)?discount2:((number>10)?discount1:discount0));
    float fee;
    fee = price * discount * number;
    printf("Number  :%7.2f\n", (float)number);
    printf("Discount:%7.2f\n", discount);
    printf("Total   :%7.2f\n", fee);

    return 0;
}
