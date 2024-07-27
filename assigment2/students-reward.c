#include <stdio.h>
int main() {
  printf("Enter your gender: ");
  char gender=getchar();

  if(gender>='a') gender-=32;
  if(gender!='M' && gender!='F') {
    printf("Enter a valid gender: [m: male,f: female]\n");
    return 1;
  }

  float percentage;
  printf("Enter your percentage: ");
  scanf("%f",&percentage);

  if(percentage>=80.0) {
    if(gender=='M')
      printf("You got an iPhone 15\n");
    else
      printf("You got a Samsung S24 ultra\n");
  } else if(percentage>=50.0) {
    if(gender=='M')
      printf("You got an apple-watch\n");
    else
      printf("You got a car\n");
  } else {
    printf("You've failed the exam\n");
  }

  return 0;
}


