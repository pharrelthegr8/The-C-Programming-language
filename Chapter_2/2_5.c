// Write the function any(s1,s2), which returns the first location in a string s1 
// where any character from the string s2 occurs, or -1 if s1 contains no characters from s2

#include <stdio.h>

#define ARRSIZE 1000

int i;
int indx = 0;
int any(char sentence1[], char sentence2[]);


int any(char s1[], char s2[]){

  int i, j, count;
  count = 0;

  for(i = j = 0; s1[i] != '\0'; i++){
    if(s1[i] == s2[indx]){
      return count;
      // if we find a match we return count immediately
    }else{
      count++;
    }
  }
  if(count == i){
    return 'a';
    // we increment count whenever a character in s1 doesnt match that in s2
    // if count matches i that means we haven't found a match
    // we return 'a' 97
  }else{
    // if not we return the count itself
    return count;
  }
}

int main(){
  
  int c, j, pos, total;
  i = j = 0;
  char s1[ARRSIZE] = {'\0'};
  char s2[ARRSIZE] = {'\0'};

  printf("This program will return the first location in sentence 1 where any character from sentence 2 occurs.\n");
  printf("(-1) means sentence 1 doesn't contain any characters from sentence 2.\n");
  printf("\n");
  printf("Input sentence 1...\n");

  while((c = getchar()) != EOF && c != '\n'){
    s1[i++] = c;
  }
  s1[i] = '\0';

  printf("Input sentence 2...\n");

  total = 0;

  while((c = getchar()) != EOF && c != '\n'){
    s2[j] = c;
    pos = any(s1, s2);
    if(pos != 'a'){
      printf("%c : index %d\n", s2[j], pos);
    }
    total += pos; // add to total each time count is returned by any()
    j++;
    indx++;
  }
  if((total/indx) == 'a'){
    // if total accumulates only values of 'a' it means there has been no match between the characters in s1 and s2
    // indx is the total count of characters in s2 the division will give us the value of 'a' 
    printf("-1\n");
  }
}
