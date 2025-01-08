/*Write a program to print a histogram of the frequencies of different character in its input.
 * e.g
 * a ****
 * b **
 * c ******
 */

#include <stdio.h>

int main(){

  int character;
  int letter_code[26] = {0};
  char letter[26];
  char asterix = '*';

  while((character = getchar()) != EOF){
    if(character != ' ' && character != '\t' && character != '\n'){
      if(character >= 'a' && character <= 'z'){
        ++letter_code[character - 'a']; // if not subtracted it ranges from (97 - 122) which is out of bounds for this array
      }
    }
  }
  // insert letter character codes into letter array
  for(int l = 0; l < 26; ++l){
    letter[l] = 'a' + l;
  }

  printf("\n");
   // display histogram
  for(int j = 0; j < 26; ++j){
    printf("%c ", letter[j]);
    for(int k = 0; k < letter_code[j]; ++k){
      printf("%c", asterix);
    }
    printf("\n");
  }

  printf("\n");
}


