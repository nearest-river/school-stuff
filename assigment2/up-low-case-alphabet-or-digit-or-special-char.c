#include <stdio.h>

int main() {
  printf("Enter a character: ");
  char ch=getchar();

  if(ch>='A' && ch<='Z')
    printf("'%c' is a uppercase alphabet",ch);
  else if(ch>='a' && ch<='z')
    printf("'%c' is a lowercase alphabet",ch);
  else if(ch>='0' && ch<='9')
    printf("'%c' is a digit",ch);
  else
    printf("'%c' is a special character",ch);
  putchar('\n');

  return 0;
}

