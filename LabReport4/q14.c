#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    strcat(str1, str2);

    printf("The concatenated string is: %s\n", str1);

    return 0;
}
