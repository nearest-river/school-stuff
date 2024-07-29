#include <stdio.h>


int main() {
  int num,p;
  printf("Enter a number: ");
  scanf("%d %d",&num,&p);

  int x=1;
  for(int i=0;i<p;i++,x*=num);

  printf("%d^%d equals to %d",num,p,x);
  return 0;
}



