#include <stdio.h>
#include <string.h>

int main() {
  char str[50];
  printf("Enter a string: ");
  scanf("%s",str);


  printf("The reversed string is %s\n",strrev(str));
  return 0;
}

