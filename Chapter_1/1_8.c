// a program to count blanks, tabs, and newlines

#include <stdio.h>

int main(){

  int character, space, tab, newline;
  newline = tab = space = 0;

  while((character = getchar()) != EOF){
      if(character == ' '){
        ++space; // count spaces
      }else if(character == '\t'){
        ++tab; // count tabs
      }else if(character == '\n'){
        ++newline; //count newlines
      }
  }
  printf("spaces: %d\n", space);
  printf("tabs: %d\n", tab);
  printf("newlines: %d\n", newline);
}
