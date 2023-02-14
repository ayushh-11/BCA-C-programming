#include <stdio.h>

int main()
{
    int i;
    int stock[5];
    float price[5];
    float total_price = 0.0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the stock of bulb %d: ", i + 1);
        scanf("%d", &stock[i]);
        printf("Enter the price of bulb %d: ", i + 1);
        scanf("%f", &price[i]);
        total_price += stock[i] * price[i];
    }

    printf("The total price of all bulbs is: $%.2f\n", total_price);

    return 0;
}
