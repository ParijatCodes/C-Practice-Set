#include <stdio.h>

int main()
{
    FILE *ptr;  
    int num;
    ptr = fopen("Q4.txt", "r");
    fscanf(ptr, "%d", &num); 

    fclose(ptr);

    ptr = fopen("Q4.txt", "w");
    fprintf(ptr, "%d", 2*num); 

    fclose(ptr);
 

    return 0;
}