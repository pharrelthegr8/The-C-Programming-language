#include <stdio.h>
#include <stdlib.h>

#define ON 0
#define OFF 1

int htoi(int s[]);
int power(int a, int b);

int s[100] = {0};
int indx = 0;


int power(int base, int power){
  int i, k;
  k = 1;

  for(i = 1; i <= power; i++){
    k = k * base;
  }
  return k;
}

int htoi(int s[]){

  int total = 0;
  int i = 0;

  if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
    for(i = 2; i < indx; i++){
      int k = s[i];
      if(k >= '0' && k <= '9'){
        s[i] = k - '0';
      }else if(k >= 'a' && k <= 'f'){
        s[i] = k - 'a' + 10;
      }else if(k >= 'A' && k <= 'F'){
        s[i] = k - 'A' + 10;
      }
    }

    int pow;
    pow = 0;
    for(int last = indx - 1; last >= 2; last--){
      s[last] = s[last] * power(16, pow);
      pow++;
      total += s[last];
    }

  }else{
    for(i = 0; i < indx; i++){
      int k = s[i];
      if(k >= '0' && k <= '9'){
        s[i] = k - '0';
      }else if(k >= 'a' && k <= 'f'){
        s[i] = k - 'a' + 10;
      }else if(k >= 'A' && k <= 'F'){
        s[i] = k - 'A' + 10;
      }
    }

    int pow;
    pow = 0;
    for(int last = indx - 1; last >= 0; last--){
      s[last] = s[last] * power(16, pow);
      pow++;
      total += s[last]; 
    }
  }
 
  return total;
}

int main(){
 
  int c;
  

  printf("Enter a hexadecimal value for decimal conversion(0x): \n");
  while((c = getchar()) != EOF && c != '\n'){
    if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F') || c == 'x' || c == 'X'){
      s[indx] = c;
      indx++;
    }else{
      printf("Invalid input!\n");
      exit(1);
    }
  }
  
  if(s[0] != '0'){
    for(int j = 0; j < indx; j++){
      if(s[j] == 'x' || s[j] == 'X'){
        printf("Invalid input (x) can only be used as a prefix(0x)!\n");
        exit(1);
      }
    }
  }else if(s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
    if(indx <= 2){
      printf("Invalid input! Too short!\n");
      exit(1);
    }
    // what if we reject all other values of x if prefix is set to ON
    for(int k = 2; k < indx; k++){
      if(s[k] == 'x' || s[k] == 'X'){
        printf("Invalid input x is not a hex value!\n");
        exit(1);
      }
    }
  }
  printf("Integer equivalent: %d\n", htoi(s));
}

