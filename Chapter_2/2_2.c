/*Write a loop equivalent to this loop
 * for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
      s[i] = c;
 * without using && or ||
 */

for(i = 0; i < lim - 1, i++){
  if((c = getchar()) == '\n')
    break;
  if(c == EOF)
    break;
  s[i] = c;
}
