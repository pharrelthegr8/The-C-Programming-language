// this program should take in a number (x) 
// a position (p) from which to start picking bits 
// a number (n) indicating the number of bits to be picked which would then later on be inverted without affecting the rest
//
// for a number 22
//
//   4 3 2 1 0
//   1 0 1 1 0
//
//   if x = 22
//      p = 2
//      n = 3
//
//  then 1 1 0 (starting from position 2) is inverted to 0 0 1
// 
// x then changes from 10110 to 10001
// new x is (17)

#include <stdio.h>
#include <stdlib.h>

int invert(unsigned int x, int p, int n);

int invert(unsigned int num, int index, int bitcount){

  int steps_to_shift_left;
  int mask = 1;
  for(int i = 0; i < bitcount-1; i++){
    mask <<= 1;
    mask |= 1;
  }
  // this creates a binary mask consisting of a count of 1s similar to the number of bits to be inverted(n)
  // this is the mask we will use to invert our digits using xor (^)
  
  steps_to_shift_left = (index + 1) - bitcount; // number of steps to shift left depending on the starting position(p)
  mask <<= steps_to_shift_left;

  int result = num ^ mask;
  return result;
}

int main(){ 


  int x, p , n;
  printf("Input a number: ");
  while((scanf("%d", &x) != 1)){
    printf("Invalid input! Please input a valid integer number: ");
    while(getchar() != '\n');
  }
  printf("Input a starting position: ");
  while((scanf("%d", &p) != 1)){
    printf("Invalid input! Please input a valid integer number: ");
    while(getchar() != '\n');
  }
  printf("Input the total count of bits to invert: ");
  while((scanf("%d", &n) != 1)){
    printf("Invalid input! Please input a valid integer number: ");
    while(getchar() != '\n');
  }

  if(n > (p + 1)){
    printf("You are attepmting to invert excess bits! Try increasing the starting position or lowering the number of bits\n");
    exit(1);
  }
  // if the user is trying to invert more bits than are available from position 0
  if(n <= 0){
    printf("The number of digits to be inverted must be more than 0!\n");
    exit(1);
  }

  printf("The number %d after %d bits starting from index %d are inverted is: %d\n", x, n, p, invert(x, p, n));

  return 0;
}
