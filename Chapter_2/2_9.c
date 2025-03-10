// a function bitcount that counts the 1 bits in its integer argument

#include <stdio.h>

int bitcount(int arg);

int bitcount(int x){

  int count;
  for(int i = 0; x != 0; ++i){
    x = x & (x - 1);
    count = i + 1;
  }

  return count;
}

int main(){

  int x = -1;
  printf("%d\n", bitcount(x));
}
