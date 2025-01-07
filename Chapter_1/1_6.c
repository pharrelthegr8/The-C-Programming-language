/*a program to verify that the expression getchar() != EOF is 0 or 1
 */
#include <stdio.h>

int main(){

  int character = getchar() != EOF;
  printf("%d\n", character);
  printf("%d\n", EOF); // let's print our EOF and see it's value
  
  /*therefore if you manually signal EOF without giving the program any input the result is 0
   * if the program then receives some input and the EOF is signaled then the result is 1
   */
  // hit crtl + d to manually signal EOF
}
