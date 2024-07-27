#include <stdio.h>

int main() {
  printf("Enter a character: ");
  char ch=getchar();

  if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    printf("\n'%c' is an alphabet\n",ch);
  else
    printf("\n'%c' is not an alphabet\n",ch);

  return 0;
}

