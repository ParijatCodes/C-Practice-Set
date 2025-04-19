#include <stdio.h>
//write a table of a number
int main(){
    FILE *fptr;
    int num;
    
    fptr = fopen("tableFile.txt", "w");
    printf("Enter the number for which you want the table: ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d", num*(i+1) );
        fprintf(fptr, "%c", '\n' );
    }
    
    return 0;
}