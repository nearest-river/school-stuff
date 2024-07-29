#include <stdio.h>


int main() {
  int a,b;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);

  int max=a>b?a:b;
  int lcm=1;
  for(int i=max;;i++) {
    if(!(i%a || i%b)) {
      lcm=i;
      break;
    }
  }

  printf("Least common multiple of %d and %d is %d\n",a,b,lcm);
  return 0;
}


