<<<<<<< HEAD
#include <stdio.h>
//to count postive integer in n numbers
int count(int a[], int n)
{
    int no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int main()
{
    int a[] = {1, 2, -3, 4, 5, -6, 7, -8, 9, 10};

    printf("The no of positive integers is %d", count(a, 10));

    return 0;
=======
#include <stdio.h>
//to count postive integer in n numbers
int count(int a[], int n)
{
    int no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int main()
{
    int a[] = {1, 2, -3, 4, 5, -6, 7, -8, 9, 10};

    printf("The no of positive integers is %d", count(a, 10));

    return 0;
>>>>>>> e1eff58dc7b97a45aacfc193aee39f7b7935f893
}