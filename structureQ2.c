#include <stdio.h>
//add two 2D vectors
typedef struct vector{
    int i;
    int j;
}V;
V sumVector(V v1, V v2){
    V v3 = {v1.i + v2.i, v1.j+v2.j};
    return v3;
}

int main(){
    V v1 = {2,3};
    V v2= {5,4};
    V v3= sumVector(v1,v2);
    printf("The value of sumVector is %di + %dj \n", v3.i, v3.j);
    
    return 0;
}