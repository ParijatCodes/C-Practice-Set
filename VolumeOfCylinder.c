#include <stdio.h>
// volume of cylinder
int main()
{
    int r, h;
    printf("The radius of the cylinder is: ");
    scanf("%d", &r);
    printf("The height of the cylinder is: ");
    scanf("%d", &h);
    printf("The volume of the cylinder is %f", 3.14 * r * r * h);
    return 0;
}