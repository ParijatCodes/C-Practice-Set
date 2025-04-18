#include <stdio.h>
//create 5 complex number
typedef struct c{
int real;
int imaginary;
}complex;

void display(complex c){
    printf("The value of complex number is %d + %di \n", c.real , c.imaginary );
}

int main(){
    complex c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("The values of the real part is \n");
        scanf("%d", &c[i].real);
        printf("The value of the imaginary part \n");
        scanf("%d", &c[i].imaginary);
        display(c[i]);
    }
    
    
    
    return 0;
}