<<<<<<< HEAD
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
=======
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
>>>>>>> e1eff58dc7b97a45aacfc193aee39f7b7935f893
}