#include <stdio.h>
#include <stdlib.h>
#define SIZE 500

void itob(int number, char array[], int base);

void itob(int n, char s[], int b){
  
  int msb = 1, octnum, INT_BITSIZE = sizeof(int) * 8;
  
  if(b == 2){
    
    msb = 1 << 31;
    for(int i = 0; i < INT_BITSIZE; i++){
      if(n & msb){
        s[i] = '1';
      }else {
        s[i] = '0';
      }
      n <<= 1;
    }
  
  }else if(b == 8){
    
    char o[SIZE] = {'\0'};
    octnum = n;
    int j = 0;
    
    do{
      o[j++] = octnum % 8 + '0';
      octnum /= 8;
    }while(octnum != 0);
    
    for(int i = 0; j > 0;){
      s[i++] = o[--j];
    }
  
  }else if(b == 16){
    
    char o[SIZE] = {'\0'};
    octnum = n;
    int j = 0, mod;
    
    do{
      if((octnum % 16) >= 10 && (octnum % 16)<= 15){
        
        mod = octnum % 16;
        o[j++] = (mod < 10) ? (mod + '0') : (mod - 10 + 'A');
        
        octnum /= 16;
 
      }else{
        o[j++] = octnum % 16 + '0';
        octnum /= 16;
      }
    }while(octnum != 0);  
  
    for(int i = 0; j >= 0;){
      s[i++] = o[--j];
    }

  }
}

int main(){

  int n, b;
  char s[SIZE] = {'\0'};

  printf("Input a number and a base for conversion(in this order): ");
  while((scanf("%d %d", &n, &b)) != 2){
    printf("Incorrect input! Please input valid integer values: ");
    while(getchar() != '\n');
  }

  if(b != 2 && b != 8 && b != 16){
    printf("Incorrect base input(only 2, 8, 16 allowed)!\n");
    exit(1);
  }

  printf("n: %d, b: %d\n", n, b);
  itob(n, s, b);
  printf("%s\n", s);

  return 0;
}
