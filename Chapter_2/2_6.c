// this program should take in two numbers x and y
// a starting position p from which bit replacement will begin
// a bit count n which is the number of bits to be replaced

#include <stdio.h>
#include <stdlib.h>

int setbits(unsigned int x, int p, int n, unsigned int y);

int setbits(unsigned int x, int p, int n, unsigned int y){

  unsigned int clearing_mask = -1;
  for(int i = 0; i < n; i++){
    clearing_mask <<= 1;
  }
  
  int steps_to_shift_left = (p + 1) - n;

  for(int i = 0; i < steps_to_shift_left; i++){
    clearing_mask <<= 1;
    clearing_mask |=1;
  }

  int extraction_mask = 1;
  for(int i = 0; i < n-1; i++){
    extraction_mask <<= 1;
    extraction_mask |= 1;
  }

  x &= clearing_mask;
  y &= extraction_mask;

  y <<= steps_to_shift_left;

  x |= y;

  return x;
}

int main(){

  int p, n, x, y;
  printf("Input first number: ");
  while((scanf("%d", &x) != 1)){
    printf("Invalid input! Please input a valid integer number: ");
    while(getchar() != '\n');
  }
  printf("Input second number: ");
  while((scanf("%d", &y)) != 1){
    printf("Invalid input! Please input a valid integer number: ");
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
    printf("You are attepmting to replace excess bits! Try increasing the starting position or lowering the number of bits\n");
    exit(1);
  }
  if(n <= 0){
    printf("Number of digits to be replaced must be more than 0!\n");
    exit(1);
  }
  
  printf("%d\n", setbits(x, p ,n, y));
}


