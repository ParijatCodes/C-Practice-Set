#include <stdio.h>
#include <string.h>
// check for a specific character
int main()
{
    char c = 'a';
    int contains = 0;
    char str[] = "Parijat";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
    }
    if (contains)
    {

        printf("Yes it contains \n");
    }
    else
    {
        printf("Doesn't contain \n");
    }
    return 0;
}