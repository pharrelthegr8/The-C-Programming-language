// a program that prints the table in reverse order

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define INCREMENT 20

int main(){

  for(int fahr = UPPER; fahr >= 0; fahr -= INCREMENT){
    printf("%3d°F %6d°C\n", fahr, (5 * (fahr - 32) /9));
  }
}
