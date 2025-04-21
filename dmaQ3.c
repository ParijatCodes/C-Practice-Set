#include <stdio.h>
#include <stdlib.h>
//first print 5 int & then print 10 int
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }
    
    printf("Now you can input 10 integers \n");
    
    n = 10;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}