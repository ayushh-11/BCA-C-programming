#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter a string with spaces: ");
    gets(str1);

    printf("Enter a string without spaces: ");
    scanf("%s",&str2);

    printf("String 1 with spaces: %s\n", str1);
    printf("String 2 without spaces: %s\n", str2);

    return 0;
}
