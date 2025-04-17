#include <stdio.h>
//create a 2D vector
struct vector{
    int i;
    int j;
};
int main(){
    struct vector v = {2,3};
    printf("The value of vector is %di + %dj \n", v.i, v.j);
    
    return 0;
}