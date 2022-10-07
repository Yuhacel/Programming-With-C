#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int num = 5;
    printf("num is %d \n", num);

    num = 8;
    printf("num is %d \n", num);

    const int number = 10; // constant variable --> cannot be changed
    printf("number is %d \n", number);

    // number = 12;
    // printf("number is %d \n", number); // ERROR

    int age;
    printf("Enter your age: ");
    // & --> address of operator --> gets the address of age variable and stores the input in that address
    scanf("%d", &age); 
    printf("You are %d years old \n", age);

    char name[30];
    printf("Enter your name: ");
    scanf("%s", &name); // scanf only gets the first word of the input
    printf("Your name is %s \n", name);

    char surname[20];
    printf("Enter your surname: ");
    fgets(surname, 20, stdin); // fgets gets the whole input 
    printf("Your surname is %s \n", surname);
    
    return 0;
}