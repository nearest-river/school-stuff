#include <stdio.h>

int main() {
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);

  printf("\nLast digit of %d is %d\n",a,a%10);
  return 0;
}

