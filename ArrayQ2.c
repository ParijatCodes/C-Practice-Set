<<<<<<< HEAD
#include <stdio.h>
// Q- Write a program to create an array of 10 integers and store multiplication table of 5 in it
int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of 5 x %d is %d \n", i + 1, arr[i]);
    }

    return 0;
=======
#include <stdio.h>
// Q- Write a program to create an array of 10 integers and store multiplication table of 5 in it
int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of 5 x %d is %d \n", i + 1, arr[i]);
    }

    return 0;
>>>>>>> e1eff58dc7b97a45aacfc193aee39f7b7935f893
}