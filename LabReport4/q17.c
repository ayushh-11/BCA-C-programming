#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, v = 0, c = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v++;
        }
        else
        {
            c++;
        }
    }
    
    printf("Number of vowels: %d\n", v);
    printf("Number of consonants: %d\n", c);
    
    return 0;
}
