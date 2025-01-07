// a program to copy its input to its output, 
// replacing each string of one or more blanks by a single blank
#include <stdio.h>

#define YES 1
#define NO 0

int main(){

  int character, was_it_a_blank;
  was_it_a_blank = NO; // track blanks

  while((character = getchar()) != EOF){
    if(character == ' '){
      if(was_it_a_blank == NO){
        // zero means there was no blank
        putchar(character); // print first blank
        was_it_a_blank = YES; // set to 1 since a blank has been encountered
        // when was_it_a_blank is set to 1 all other blanks encountered afterwards are not printed
      }
    }else{
        // if the character is not a blank print it
        was_it_a_blank = NO; // reset value
        putchar(character);
    }
  } 
}
