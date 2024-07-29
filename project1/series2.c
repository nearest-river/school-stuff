#include <stdio.h>


int main() {
  int n;
  printf("Enter n terms: ");
  scanf("%d",&n);

  int sum=0;
  for(int i=1,fact=1;i<=n;i++,fact*=i) {
    sum+=fact;
  }

  printf("Sum of the series is %d\n",sum);
  return 0;
}



