#include <stdio.h>
#include <stdlib.h>

  

int main()
{
    
    int numbers[] = {2, 8, 4, 3, 9};
    printf("the first elemenet is %d \n", numbers[0]);
    printf("the last elemenet is %d \n", numbers[4]);
    printf("the sum of all elemenets is %d \n", numbers[0]
            + numbers[1] + numbers[2] + numbers[3] + numbers[4]);

    numbers[4] = 20;
    printf("the last elemenet now is %d \n", numbers[4]);

    

    return 0;
}    