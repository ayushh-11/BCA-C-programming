#include <stdio.h>

int main()
{
    char str1[10] = "Hello";
    char str2[] = "World";
    char str3[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("String 1 is: %s\n", str1);
    printf("String 2 is: %s\n", str2);
    printf("String 3 is: %s\n", str3);

    return 0;
}