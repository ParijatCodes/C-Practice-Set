#include <stdio.h>
#include <string.h>
// count a specific character

int main()
{
    char c = 'a';
    int count = 0;
    char str[] = "Parijat";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}