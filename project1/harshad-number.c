#include <stdio.h>

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);

  int n=num,sum=0;
  while(n>0) {
    sum+=n%10;
    n/=10;
  }

  printf("%d %s a harshad number\n",num,num%sum?"isn't":"is");
  return 0;
}



