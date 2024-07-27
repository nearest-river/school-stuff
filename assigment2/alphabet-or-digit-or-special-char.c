#include <stdio.h>

int main() {
  printf("Enter a character: ");
  char ch=getchar();

  if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    printf("\n'%c' is an alphabet\n",ch);
  else if(ch>='0' && ch<='9')
    printf("\n'%c' is a digit\n",ch);
  else
    printf("\n'%c' is a special character\n",ch);

  return 0;
}

