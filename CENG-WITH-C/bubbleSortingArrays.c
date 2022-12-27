#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int i,k,f,m,n;

    int arrayList[10]={};

    for(i=0; i<10; i++){
        printf("please enter %d. integer (1 enter for each number)\n", i+1);
        scanf("%d", &arrayList[i]);
    }

    printf("\n\n");

    printf("Original List :\n");
    for(m=0; m<10; m++){
        printf("%d,", arrayList[m]);
    }

    for(k=0; k<10; k++){
        for(f=0; f<10; f++){
            if(arrayList[f+1] < arrayList[f])
        {
            int temp = arrayList[f];
            arrayList[f] = arrayList[f+1];
            arrayList[f+1] = temp;
        }
        else
        {
            continue;
        }
        }
    }

    printf("\n\n");
    printf("Altered List :\n");
    for(n=0; n<10; n++){
        printf("%d,", arrayList[n]);
    }

    printf("\n\n");
    printf("The biggest number is %d \n", arrayList[9]);
    printf("The smallest number is %d \n", arrayList[0]);
    
    return 0;

}