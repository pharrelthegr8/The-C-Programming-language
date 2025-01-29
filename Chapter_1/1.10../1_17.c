// this program should print all input lines greater than 80 characters

#include <stdio.h>
#define MAXSIZE 1000

int main(){
  
  int character, i;
  char a[MAXSIZE];
  i = 0;

  while((character = getchar()) != '\n'){
    a[i] = character;
    i++;
  }
  if(character == '\n'){
    a[i] = character;
    i++;
  }
  a[i] = '\0';

  i = i - 2;
  printf("%d characters.\n", i);
  
  if(i > 80){
    printf("%s", a);
  }  
}
