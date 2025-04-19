#include <stdio.h>
//takke values from a file and print it
int main(){
    FILE *fptr;
    int num1, num2, num3;
    fptr = fopen("demoFile.txt", "r");
    fscanf(fptr, "%d %d %d", &num1 , &num2, &num3);
    printf("The values are %d %d %d", num1, num2, num3);

    fclose(fptr);
    return 0;
}