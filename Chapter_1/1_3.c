#include <stdio.h>
#include <stdlib.h>

// symbolic constants
#define LOWER 0 // lowest limit
#define UPPER 300 // highest limit
#define INCREMENT 20 // increment size

int main(){
  
  system("clear"); // just to clear the terminal every time the code runs
  printf("Temperature Converter\n"); // the heading for the table
  printf("\n");
  int fahr;

  for(fahr = LOWER; fahr <= 300; fahr = fahr + INCREMENT){
    printf("%3d°F %6d°C\n", fahr, (5 * (fahr - 32) / 9))
  }
}
