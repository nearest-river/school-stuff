#include <stdio.h>


int main() {
  int length,bredth;

  printf("Enter the length of the rectangle: ");
  scanf("%d",&length);

  printf("\nEnter the bredth of the rectangle: ");
  scanf("%d",&bredth);

  int area=length*bredth;
  int perimeter=2*(length+bredth);
  printf("\nArea of the rectangle: %d square units\nPerimeter of the rectangle: %d units\n",area,perimeter);

  return 0;
}


