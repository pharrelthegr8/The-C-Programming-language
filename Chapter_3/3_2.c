#include "stdio.h"
#define SIZE 1000

void escape(char s[], char t[]);
void revert(char s[], char t[]);

void escape(char s[], char t[]){
  int i = 0, k = 0, j = 0, c;
  
  while((c = t[i++]) != 0){
    switch (c){
      case '\t':
        s[k++] = '\\';
        s[k++] = 't';
        j++;
        break;
      
      case '\n':
        s[k++] = '\\';
        s[k++] = 'n';
        break;

      default:
        s[k++] = t[j++];
        break;
    }
  } 
}

int main(){

  char s[SIZE] = {0}, t[SIZE] = {0};
  int c, i = 0;

  printf("Input a statement: ");
  while((c = getchar()) != EOF){
    t[i++] = c;
  }
  
  escape(s, t);
  printf("%s\n", s);
  revert(s, t);
  printf("%s", t);

  return 0;
} 
  
void revert(char s[], char t[]){
  int i = 0, j = 0, l = 0, c;
  for (int k = 0; k < SIZE-1; k++){
    t[k] = '\0';
  }

  while((c = s[i++]) != 0){
    switch (c){
      case '\\':
        switch (s[i++]){
          case 't':
            t[j++] = '\t';
            l+=2;
            break;
      
          case  'n':
            t[j++] = '\n';
            break;
        }
        break;
       
      default:
        t[j++] = s[l++];
        break;
    }   
  }
}
