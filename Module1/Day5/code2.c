#include <stdio.h>


struct complex {
    float real;
    float imag;
};
typedef struct complex complex;

void readComplex(complex *) ;
void writeComplex(complex );
complex addComplex( complex ,  complex );
complex multiplyComplex(complex ,  complex );
int main() {
     complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("Enter the second complex number:\n");
    readComplex(&num2);

   
    sum = addComplex(num1, num2);
    printf("Sum of the two complex numbers:\n");
    writeComplex(sum);

    
    product = multiplyComplex(num1, num2);
    printf("Product of the two complex numbers:\n");
    writeComplex(product);

    return 0;
}
void readComplex(complex *c) {
    printf("Enter the real part: ");
    scanf("%f", &c->real);
    printf("Enter the imaginary part: ");
    scanf("%f", &c->imag);
}


void writeComplex(complex c) {
    if (c.imag >= 0)
        printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
    else
        printf("Complex number: %.2f - %.2fi\n", c.real, -c.imag);
}

complex addComplex( complex c1,  complex c2) {
     complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}


 complex multiplyComplex(complex c1,  complex c2) {
     complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

