#include <stdio.h>


int main() {
  int n;
  printf("Enter n terms: ");
  scanf("%d",&n);

  int sum=0;
  for(int i=1;i<=n;i++) {
    sum+=i*i*i;
  }

  printf("Sum of the series is %d\n",sum);
  return 0;
}



