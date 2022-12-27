#include <stdio.h>

int main(){

    float a;
    float b;
    float c;
    float d;

   
    printf("Please input the value of a : "); 
    scanf("%f", &a);                              // here, I got the VALUE of " a "

    printf("Please input the value of b : ");
    scanf("%f", &b);                              // here, I got the VALUE of " b "

    printf("Please input the value of c : ");
    scanf("%f", &c);       

    if ( c == 1 ){

        printf("c cannot be 1 ");   // here, c CANNOT be equal to " 1 " 
        return 0;

    }else{

        d = ( a * (4 + (b*b*b)/5) ) / ( c-1 );    // here, I got the VALUE of " d "

        printf("The result (d) is %0.3f ", d);   // here, I used " %0.3f "
        
    }

    return 0;
}