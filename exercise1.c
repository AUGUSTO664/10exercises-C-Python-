//write a program to input any character and check wheter it is alphabet,
//digit or special character.
//to achieve this, I will use the ASCI table numbers

#include <stdio.h>
#include <stdio.h>

int main()
{
   char symbol;
   int number=0;
   printf("This pogram check a given character\n");
   printf("type a character please: ");
   scanf("%c", &symbol);

   number = symbol; //putting the character number into one variable
   //printf("%c\n, %d", symbol, number );
   //comparing with the ASCII number to verify what is the character given
   if(number>=65 && number<=90)
      printf("the character is a letter\n");

   else if(number>=97 && number<=122)
      printf("the character is a letter\n");

   else if(number>=48 && number<=57)
      printf("the character is a number\n");

   else
      printf("is a scpecial character\n");

   return 0;

}
