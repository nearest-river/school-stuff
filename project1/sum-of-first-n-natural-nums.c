#include <stdio.h>


int main() {
  int n;
  printf("Enter n terms: ");
  scanf("%d",&n);

  printf("Sum of the first %d natural numbers is %d\n",n,(n*(n+1))>>1);
  return 0;
}



