// let's replace all tabs in input with spaces to the next tabstop

#include <stdio.h>

#define TABSTOP 4

int main(){

  int character, i, spaces, k, j;

  i = 0;

  while((character = getchar()) != EOF){
    if(character == '\t'){

      j = i; // where the \t character appears
      j++;
      spaces = TABSTOP - (j % TABSTOP); // spaces to the next tabstop
      
      for(k = 0; k < spaces; k++){
        printf(" ");
        i++;
      }

    }else{
      putchar(character); // if it's not a tab then print it nonetheless
      i++;
    }
  }
}
