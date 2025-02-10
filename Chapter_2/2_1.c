/*Write a program to determine the ranges of char, short, int, and long
variables, both signed and unsigned, by printing appropriate values from standard headers
and by direct computation
 */

#include <stdio.h>
#include <limits.h>

int main(){
  
  printf("Bits in a char: %d\n", CHAR_BIT);
  printf("Char min is: %d\n", CHAR_MIN);
  printf("Char max is: %d\n", CHAR_MAX);
  printf("\n");

  printf("Short min is: %d\n", SHRT_MIN);
  printf("Short max is: %d\n", SHRT_MAX);
  printf("\n");

  printf("Int min is: %d\n", INT_MIN);
  printf("Int max is: %d\n", INT_MAX);
  printf("\n");

  printf("Long min is: %ld\n", LONG_MIN);
  printf("Long max is: %ld\n", LONG_MAX);
  printf("\n");

  printf("Signed char min is: %d\n", SCHAR_MIN);
  printf("Signed char max is: %d\n", SCHAR_MAX);
  printf("\n");

  printf("Unsigned char max is: %d\n", UCHAR_MAX);
  printf("Unsigned int max is: %d\n", UINT_MAX);
  printf("Unsigned long max is: %ld\n", ULONG_MAX);
  printf("Unsigned short max is: %d\n", USHRT_MAX);
  
  return 0;
}
