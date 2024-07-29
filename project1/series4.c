#include <stdio.h>


int main() {
  int n;
  printf("Enter n terms: ");
  scanf("%d",&n);

  float sum=0;
  for(float i=1;i<=n;i++) {
    sum+=1/i;
  }

  printf("Sum of the series is %f\n",sum);
  return 0;
}



