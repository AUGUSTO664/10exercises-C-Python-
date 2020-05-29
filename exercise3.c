//write a program to find maximun between three numbers
//finish
#include <stdio.h>
int main()
{
  int list_number[3];
  int temp=0,i;

  for(i=0;i<=2;i++)   //getting the numbers with scanf
  {
    printf("[%d] is: ", i);
    scanf("%d",&list_number[i]);
  }

  temp=list_number[0]>list_number[1]?list_number[0]:list_number[1];

  if(list_number[2]>temp)
     printf("The largest is %d\n", list_number[2]);
  else
     printf("The largest is %d\n", temp);

  return 0;

}
