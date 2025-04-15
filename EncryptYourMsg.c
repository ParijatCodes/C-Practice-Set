#include <stdio.h>
#include <string.h>
// Encrypt your message
int main()
{
    char str[] = "code";
    printf("Enter your msg: ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }

    printf("%s", str);
    return 0;
}