// Write a function squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2.
// so if the string in s1 is equivalent to the string in s2 they should totally cancel out

#include <stdio.h>

#define ARRSIZE 1000

int indx = 0;
void squeeze(char sentence1[], char sentence2[]);

void squeeze(char s1[], char s2[]){

  int i, j;

  for(i = j = 0; s1[i] != '\0'; i++){
    if(s1[i] != s2[indx]){
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
}

int main(){
  
  int c, j;
  int i = j = 0;
  char s1[ARRSIZE] = {'\0'};
  char s2[ARRSIZE] = {'\0'};

  printf("This program will delete every character in sentence 1 that matches any character in sentence 2.\n");
  printf("\n");
  printf("Input sentence 1...\n");

  while((c = getchar()) != EOF && c != '\n'){
    s1[i++] = c;
  }
  s1[i] = '\0';

  printf("Input sentence 2...\n");

  while((c = getchar()) != EOF && c != '\n'){
    s2[j++] = c;
    squeeze(s1, s2);
    indx++;
  }

  printf("%s", s1);

}
