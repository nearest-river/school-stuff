#include <stdio.h>

int main() {
  int a,b,c;
  printf("Enter the first number: ");
  scanf("%d",&a);

  printf("\nEnter the second number: ");
  scanf("%d",&b);

  printf("\nEnter the third number: ");
  scanf("%d",&c);

  int greatest=a;
  if(greatest<b) {
    greatest=b;
  }
  if(greatest<c) {
    greatest=c;
  }

  printf("\n%d is the greatest\n",greatest);
  return 0;
}



