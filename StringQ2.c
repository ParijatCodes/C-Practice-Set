#include <stdio.h>
// Slice a string
char *slice(char str[], int m, int n)
{
    int i = 0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}
int main()
{
    char str[] = "Parijat Codes";
    printf("%s \n", slice(str, 0, 7));

    return 0;
}