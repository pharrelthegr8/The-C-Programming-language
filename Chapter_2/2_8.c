#include <stdio.h>

int right_rotate(unsigned int number, int constraint);

int right_rotate(unsigned int num, int rotate){
  
  int one_at_end = 1 << 31;
  
  for(int i = 0; i < rotate; i++){
    if(num & 1){
      // performing an and& between num and a 1 at the least significant bit shows whether the lsb is a one or a zero
      num = (num >> 1) | one_at_end;
      // if the lsb was 1 then carry it over to the left most part and make it the most significant bit
    }else{
      // if the lsb was 0 then keep shifting bits left until a 1 is encountered
      num >>= 1;
    }  
  }
    return num;
}


int main(){

  int orgNum, rotation;

  printf("Input an integer value to rotate its bits right: ");
  while((scanf("%d", &orgNum)) != 1){
    printf("Invalid input! Please input a valid integer value: ");
    while(getchar() != '\n');
  }
  
  printf("Input a rotation value: ");
  while((scanf("%d", &rotation)) != 1){
    printf("Invalid input! Please input a valid integer value: ");
    while(getchar() != '\n');
  }

  unsigned int num = (unsigned int)orgNum;

  printf("Number after right rotation: %d\n", right_rotate(num, rotation));

  return 0;
}
