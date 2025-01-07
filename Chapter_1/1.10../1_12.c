// a program that prints its input one word per line

#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

  int character;
  int state = OUT;

  while((character = getchar()) != EOF){

    if(character != ' ' && character != '\t'){
      state = IN;
      putchar(character);

    }else if(state == IN){
      printf("\n");
      state = OUT;
    }
  }
  return 0;
}
