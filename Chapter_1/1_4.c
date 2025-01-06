#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define INCREMENT 20

int main(){
  
  
  int cels;

  for(cels = LOWER; cels <= UPPER; cels += 20){
    printf("%3d°C %6d°F\n", cels, (((9 * cels) / 5) + 32));
  }
}

