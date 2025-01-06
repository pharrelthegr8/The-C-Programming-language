#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define INCREMENT 20

int main(){
  
  system("clear");
  printf("Temperature Converter\n");
  printf("\n");
  int fahr;

  for(fahr = LOWER; fahr <= 300; fahr = fahr + INCREMENT){
    printf("%3d %6d\n", fahr, (5 * (fahr - 32) / 9));
  }
}
