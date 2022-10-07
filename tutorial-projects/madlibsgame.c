#include <stdio.h>
#include <stdlib.h>

    // roses are red
    // violets are blue
    // i love you

int main()
{
    char color[20];
    char pluralNoun[20];
    char animalName[20];

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);

    printf("Enter an animal name: ");
    scanf("%s", animalName);

    printf("Roses are %s \n", color); 
    printf("%s are blue \n", pluralNoun);
    printf("I love %s \n", animalName);

    return 0;
}    