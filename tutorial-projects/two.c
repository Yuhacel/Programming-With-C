#include <stdio.h>

int main()
{   
    printf("heya there\n");

    // %s --> string --> text
    // %d --> integer (decimal)
    // %f --> float (decimal)
    // %c --> character 
    // %lf --> double float
    // %ld --> long integer 
    // %u --> unsigned int 
    // %lu --> unsigned long int
    // %llu --> unsigned long long int
    // %lld --> long long int
    // %x --> hexadecimal
    // %o --> octal
    // %p --> pointer
    // %e --> scientific notation
    // %g --> general format
    // %n --> number of characters written so far


    printf("my fav %ss are %d and %f ", "number", 238, 3.14);

    int favNum = 123;
    printf("my fav number is %d \n", favNum);

    // any operation between integer and float will result in float

    printf(" sum %f \n", 3 + 4.5);

    // pow() is a function from math.h library
    // pow(base, power)
    // pow(2, 3) --> 2^3 = 8

    printf(" pow %f \n", pow(2,3) ); 

    // sqrt() is a function from math.h library
    // sqrt(number)
    // returns square root of number

    printf(" sqrt %f \n", sqrt(36) );

    // ceil() is a function from math.h library
    // ceil(number)
    // ceil() rounds up the number

    printf(" ceil %f \n", ceil(36.356) );

    // floor() is a function from math.h library
    // floor(number)
    // floor() rounds down the number

    printf(" floor %f \n", floor(36.756) );

    // round() is a function from math.h library
    // round(number)
    // round() rounds the number to the nearest integer as a float

    printf(" round %f \n", round(36.456) );
    printf(" round %f \n", round(36.556) );

    // fmax() is a function from math.h library
    // fmax(number1, number2)
    // returns the maximum of two numbers

    printf(" fmax %f \n", fmax(36, 37) );

    // YOU CAN CHECK MORE FUNCTIONS IN MATH.H LIBRARY
    // C MATH FUNCTIONS 

    return 0;
}