#include <stdio.h>

int main(){

  printf("Hello\cPeople\n"); // you will receive a warning since \c is not a valid escape sequence
}

/*
1_2.c: In function ‘main’:
1_2.c:5:27: warning: unknown escape sequence: '\c'
    5 |   printf("Hello\cPeople\n");
      |                           ^
*/      
