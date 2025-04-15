#include <stdio.h>
#include <string.h>
// Encrypt your message
int main()
{
    char str[] = "uijt"; // enter your encrypted text

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }

    printf("%s", str);
    return 0;
}