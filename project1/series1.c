#include <stdio.h>


int main() {
  int n;
  printf("Enter n terms: ");
  scanf("%d",&n);

  int sum=0;
  for(int i=1,acc=2;i<=n;i++,acc*=2) {
    sum+=acc;
  }

  printf("Sum of the series is %d\n",sum);
  return 0;
}



