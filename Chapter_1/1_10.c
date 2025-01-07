/*a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\
*/

#include <stdio.h>

int main(){

  int character;

  while((character = getchar()) != EOF){
    if(character == '\t'){
      printf("\\t");
    }else if(character == '\b'){
      printf("\\b");
    }else if(character == '\\'){
      printf("\\\\");
    }else{
      putchar(character);
    }
  }
}
