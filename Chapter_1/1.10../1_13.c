#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

  char asterix = '*';
  char character;
  int index = 0;
  char words[20];
  int state = OUT;
  int increments[20] = {0}; // to keep track of letter counts in a word and the frequency of them


  while((character = getchar()) != EOF){
    if(character != ' ' && character != '\t' && character != '\n'){
      if(state == OUT){
        state = IN; // new word
        index = 0; // reset in new word
      }
      if(index < 20){
        words[index] = character;
        ++index;
      }
    }else if(state == IN){
      printf("%s ", words);
      
      if(index < 20){
        ++increments[index]; // count the number of times a specific index is appearing
      }
      state = OUT; // outside word
      
      for(int j = 0; j < 20; ++j){
        // reset array after each word
        words[j] = '\0';
      }
    } 
  }
  printf("\n");
  for(int l = 1; l < 10; ++l){
      printf("%d ", l);
      for(int m = 0; m < increments[l]; ++m){
        putchar(asterix);
      }
      printf("\n");
  }
  /*code for a horizontal histogram
   */
}

