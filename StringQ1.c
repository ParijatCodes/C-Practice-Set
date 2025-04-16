<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
// Write your own version of Strlen function
int Strlen(char str[])
{

    int i = 0, count;
    char c = str[i];

    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}
int main()
{
    char str[] = "Parijat";
    printf("%d", Strlen(str));
    return 0;
=======
#include <stdio.h>
#include <string.h>
// Write your own version of Strlen function
int Strlen(char str[])
{

    int i = 0, count;
    char c = str[i];

    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}
int main()
{
    char str[] = "Parijat";
    printf("%d", Strlen(str));
    return 0;
>>>>>>> e1eff58dc7b97a45aacfc193aee39f7b7935f893
}