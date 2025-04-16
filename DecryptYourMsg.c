<<<<<<< HEAD
#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

int main()
{
    char str[MAX_LEN];

    // Input the encrypted text
    printf("Enter your encrypted message: ");
    if (fgets(str, MAX_LEN, stdin) != NULL)
    {
        // Remove newline if present
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
        }

        // Decrypt by subtracting 1 from each character
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i] - 1;
        }

        printf("Decrypted message: %s\n", str);
    }

    return 0;
}
=======
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
>>>>>>> e1eff58dc7b97a45aacfc193aee39f7b7935f893
