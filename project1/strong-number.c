#include <stdio.h>

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);

  int n=num,sum=0;
  while(n>0) {
    int fact=1;
    for(int i=1;i<=n%10;fact*=i++);
    sum+=fact;
    n/=10;
  }

  printf("%d %s a strong number\n",num,num==sum?"is":"isn't");
  return 0;
}



