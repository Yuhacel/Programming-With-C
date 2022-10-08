#include <stdio.h>
#include <stdlib.h>


int max2(int a, int b){ // I need to find a solution for the situation of equality !
  int result;

  if (a > b) {
    result=a; 
  } else {
    result=b;
  }
  return result;
}


int max3(int a, int b, int c){ // I need to find a solution for the situation of equality !
  int result;

  if(a >= b && a >= c){
    result=a;
  } else if (b >= a && b >= c) {
    result=b;
  } else {
    result=c;
  }
}


int main(){

  printf("%d is greater \n", (max2(11, 11)));
  
  printf("%d is greatest \n", (max3(1,2,3)));

  return 0;
}



