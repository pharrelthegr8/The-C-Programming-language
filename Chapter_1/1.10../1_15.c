#include <stdio.h>

int converter(int fahr);

int main(){
  
  int fahr, upper, lower, increment;
  upper = 300;
  lower = 0;
  increment = 20;

  for(fahr = lower; fahr <= upper; fahr += increment){
    printf("%3d°F %6d°C\n", fahr, converter(fahr));
  }
}
// a function to convert temperatures and return the results
int converter(int fahr){

  int cels;
  cels = 5 * (fahr - 32) / 9;

  return cels;
}
