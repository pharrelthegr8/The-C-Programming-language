// remove trailing blanks and tabs from each line of input and delete entirely blank lines
#include <stdio.h>
#define MAXSIZE 1000

int main(){

  int character, i;
  char curr_line[MAXSIZE];
  i = 0;

  while((character = getchar()) != '\n'){
    curr_line[i] = character;
    i++;
  }
  if(character == '\n'){
    curr_line[i] = character;
    i++;
  }
  curr_line[i] = '\0';

  printf("%d\n", i);
  printf("%s", curr_line);

  int k;

  for(k = i - 2; curr_line[k] == ' ' || curr_line[k] == '\t'; k--){
    
  }
  k++;
  curr_line[k] = '\n';
  k++;
  curr_line[k] = '\0';
  
  printf("%d\n", k);
  printf("%s", curr_line);

}
