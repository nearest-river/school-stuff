#include<stdio.h>
int main() {
	int a,b,c;
	char op;

	printf("Enter two values: ");
	scanf("%d %d",&a,&b);

  printf("Enter A for Addition\nEnter B for Subsraction\nEnter C for Multiplication\nEnter D for Division\n");
  printf("Enter your choice : ");

  fflush(stdin);
  getchar();
  scanf("%c",&op);

  printf("\nu8: %d,char: '%c'\n",op,op);

  switch(op) {
    case 'A':
    c=a+b;
    printf("The sum is %d\n",c);
    break;
    case 'B':
    c=a-b;
    printf("The difference is %d\n",c);
    break;
    case 'C':
    c=a*b;
    printf("The multiplication is %d\n",c);
    break;
    case 'D':
    c=a/b;
    printf("The division is %d\n",c);
    break;
    default:
    printf("Wrong Choice\n");
	}
}


