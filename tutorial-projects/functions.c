#include <stdio.h>
#include <stdlib.h>

  

double cube(double num)
{
    double result = num * num * num;
    return result;    
}


int main()
{
    
    sayHello("Josef", 20);
    sayHello("Joe", 25);

    sum(5, 6);

    foo();

    printf("Answer: %f", cube(8.0));

    return 0;
}    

// void means that the function does not return value
// There are 3 basic ways that void is used:
  // Function argument: int myFunc(void) -- the function takes nothing.
  // Function return value: void myFunc(int) -- the function returns nothing
  // Generic data pointer: void* data -- 'data' is a pointer to data of unknown type, and cannot be dereferenced

void sayHello(char name[], int age)   
{
    printf("Hello %s , your age is %d !\n", name, age);
} 

// In C, void can be used as:
  // Return type of a function that returns nothing.
  // Consider the code snippet below, which uses void as a return type.

void sum(int a, int b){
  printf("This is a function that has no return type \n");
  printf("The function prints the sum of its parameters: %d \n", a + b);
} 

// Input parameter of a function that takes no parameters.
// Consider the code snippet below, which uses void as an input parameter.

// Note:
  // In C, foo() is different from foo(void). 
  // foo() means that the function takes an unspecified number of arguments.
  // foo(void) is used for a function that takes no arguments.

int foo(void){
  printf("This is a function that has no input parameters \n");
  return 0;
}

