// the program couldn't handle the largest negative number since on an example of a 32 bit system
// the negative range has one extra value that positive numbers don't
// trying to compute -n would cause an integer overflow because then the value wouldn't fit a 32-bit signed int

#include <stdio.h>
#include <string.h>
#include <limits.h>
#define SIZE 500

void itoa(int number, char array[]);
void reverse(char array[]);

void itoa(int n, char s[]){

  int i, sign;
  i = 0;

  if((sign = n) < 0){
    if((n % 10) != 0){
      n++;
      n = -n;
      s[i++] = n % 10 + 1 + '0';
      n/=10;
    }else{
      n = -n;
    } 
  }
    do{
      s[i++] = n % 10 + '0';
    }while((n/=10) > 0);

  if(sign < 0){
    s[i++] = '-';
  }
  s[i++] = '\n';

  reverse(s);
}

void reverse(char s[]){
  int i, j = SIZE-1;
  char v[SIZE] = {'\0'};

  while(s[j] != '\n'){
    j--;
  }
  j--;
  
  for(i = 0; j >= 0; i++){
    v[i] = s[j--];
  }
  v[i++] = '\n';
  
  j = 0;
  memset(s, '\0', SIZE);
  for(i = 0; i < SIZE-1; i++){
    s[j++] = v[i];
  }
}

int main(){
  
  int n = INT_MIN;
  char s[SIZE] = {'\0'};
  
  // to test for other values the uncomment this block

  /*printf("Input a integer number: ");
  while((scanf("%d", &n)) != 1){
    printf("Incorrect input! Please input an integer value: ");
    while(getchar() != '\n');
  }
  */
  

  itoa(n, s);
  printf("%s", s);  
  return 0;
}
