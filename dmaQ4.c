#include <stdio.h>
#include <stdlib.h>
//Table of 7 upto 10 & 15
int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i]= 7 *(i+1);
    }

    printf("The Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }
    
    printf("\nIncreasinng the multiplication table upto 15 \n\n");
    
    n = 15;
    ptr = (int *)realloc(ptr, 15 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i]= 7 * (i+1);
    }

    printf("The Array is \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    return 0;
}