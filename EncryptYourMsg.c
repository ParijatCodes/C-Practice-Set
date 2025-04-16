#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000
int main()
{
    char str[MAX_LEN];

    printf("Enter your message: ");
    fgets(str, MAX_LEN, stdin);

    // Remove newline if fgets adds one
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }

    printf("Encrypted message: %s\n", str);
    return 0;
}