#include <stdio.h>


int main() {
  int a,b;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);

  int min=a<b?a:b;
  int gcd=1;
  for(int i=1;i<=min;i++) {
    if(a%i || a%i) continue;
    gcd=i;
  }

  printf("Greatest common divisor of %d and %d is %d\n",a,b,gcd);
  return 0;
}


