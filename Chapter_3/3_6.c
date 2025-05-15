#include <stdio.h>
#include <string.h>
#define SIZE 500

void itoa(int number, char array[], int fieldwidth);
void reverse(char array[]);

void itoa(int n, char s[], int width){

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

  int spaces = width - i;
  if(spaces > 0){
    for(int k = 0; k < spaces; k++){
      s[i++] = ' ';
    }
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
  
  int n, width;
  char s[SIZE] = {'\0'};
  

  printf("Input a integer number: ");
  while((scanf("%d %d", &n, &width)) != 2){
    printf("Incorrect input! Please input an integer value: ");
    while(getchar() != '\n');
  }
  

  itoa(n, s, width);
  printf("%s", s);  
  return 0;
}
