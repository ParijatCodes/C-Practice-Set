
#include <stdio.h>
// Write a program containg a function which reverses the array passeed to it
void printArray(int a[], int n)
{
     for (int i = 0; i < n; i++)
     {
          printf("%d", a[i]);
     }
     printf(" \n");
}
void reverse(int arr[], int n)
{
     int temp;
     for (int i = 0; i < n / 2; i++)
     {
          temp = arr[i];
          arr[i] = arr[n - i - 1];
          arr[n - i - 1] = temp;
     }
}
int main()
{
     int arr[] = {1, 2, 3, 4, 5, 6, 7};
     printArray(arr, 7);
     reverse(arr, 7);
     printArray(arr, 7);
     return 0;
}