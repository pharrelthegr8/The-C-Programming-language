// a program that will reverse the lines of input

#include <stdio.h>
#define MAXSIZE 1000

void reverse(char from[], char to[],int index);

int main(){
  
  int character;
  char a[MAXSIZE], b[MAXSIZE];
  int i = 0;

  while((character = getchar()) != EOF && character != '\n'){
    a[i] = character;
    i++;
  }
  if(character == '\n'){
    a[i] = character;
    i++;
  }

  a[i] = '\0'; // without this line you're going to be printing garbage in the terminal

  reverse(a, b, i);
  printf("%s", b);
}

void reverse(char from[], char to[], int index){
  int j, i;

  j = 0;
  i = index - 2;
  
  while(from[i] != '\0'){

    to[j] = from[i];
    i--;
    j++;

  }
  to[j] = '\n';
  j++;
  to[j] = '\0';
}
