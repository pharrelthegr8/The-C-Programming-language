// a program to copy its input to its output, 
// replacing each string of one or more blanks by a single blank
#include <stdio.h>

int main(){

   int character, previous;

   while((character = getchar()) != EOF){
     if(character != ' ' || previous != ' '){
       
       putchar(character);

     }
     previous = character;
   }
}
// This keeps only one variable ahead of the other and when a space is encountered
// only the first space is printed the rest are ignored
