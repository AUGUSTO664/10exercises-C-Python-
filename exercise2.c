//write a program to cheack whether a number is even or odd
//to achieve this I will % to verify
#include <stdio.h>

int main()
{
  int number;
  printf("this program will verify if a number is even or odd\n");
  printf("give me a number please: ");
  scanf("%d", &number);

  if(number%2==0)
    printf("the number is even\n");

  else
    printf("the number is odd\n");


  return 0;
}
