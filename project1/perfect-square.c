#include <stdio.h>


int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);

  for(int i=0;i<=num;i++) {
    if(i*i==num) {
      printf("%d is a perfect square\n",num);
      return 0;
    }
  }

  printf("%d isn't a perfect square\n",num);
  return 0;
}



