// this program should convert upper case to lower case using a conditional expression
#include <stdio.h>

int lower(int c){

  int result = (c >= 'a' && c <= 'z')? c-('a'-'A'): c;
  return result;
}

int main(){

  int c, i = 0;
  char letters[1000] = {'\0'};

  while((c = getchar()) != '\n'){
  
    letters[i] = lower(c);
    i++;
  }
  letters[i] = '\n';

  printf("%s", letters);

}
