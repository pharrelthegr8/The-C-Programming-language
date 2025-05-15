// this program should expand shorthand notations eg a-z becomes abc...xyz and 0-9 becomes 012...789

#include <stdio.h>
#define ARRSIZE 1000

void expand(char arr1[], char arr2[]);

void expand(char s1[], char s2[]){
  
  int i = 0, j = 0;

  while(s1[i] != '\0'){
    if(s1[i] != '-'){
      s2[j++] = s1[i++];
    }else{
      if((s1[i-1] >= '0' && s1[i-1] <= '9') && (s1[i+1] >= '0' && s1[i+1] <= '9')){
        int f = s1[i-1];
        int l = s1[i+1];
        while(f < (l-1)){
          s2[j++] = ++f;
        }
        i++;
      }else if((s1[i-1] >= 'a' && s1[i-1] <= 'z') && (s1[i+1] >= 'a' && s1[i+1] <= 'z')){
        int f = s1[i-1];
        int l = s1[i+1];
        while(f < (l-1)){
          s2[j++] = ++f;
        }
        i++;
      }else{
        s2[j++] = s1[i++];
      }
    }
  }
}  

int main(){

  char s1[ARRSIZE] = {'\0'}, s2[ARRSIZE] = {'\0'};
  int c, i = 0;

  while((c = getchar()) != EOF && c != '\n'){
    s1[i++] = c;  
  }
  if(c == '\n'){
    s1[i++] = '\n';
  }

  printf("%s", s1);
  expand(s1, s2);
  printf("%s", s2);

  return 0;
}
