//write a program that display the Zodiacal sign using the day and month
//of birthday. Using a switch case

#include <stdio.h>

int main()
{
  int month, day, i;
  char *year[]={"January", "February", "March","April","May","June","July",
                 "August","September", "october", "november", "December" };
  printf("Do you know what Zodiacal sign are you?\n");

  for(i=0;i<12;i++)     //showing the months of the year with a number for
  {                      // the index in the switchcase
    printf("[%d] %s\n", i, year[i]);
  }
//the switch case works with the number of the variable month
// getting th date
  printf("Give me the number of your month: ");
  scanf("%d", &month);
  printf("Give me the day of your bithday: ");
  scanf("%d", &day);

//star switch case
  switch(month)
  {
    case 0://if the month is january
     {
     if(day>=1 && day<=20)printf("Congratulations you are capricornio\n");
     else if(day >20 && day <= 31)printf("You are Acuario\n");
     break;
     }
    case 1: //if the month is February
     {
      if(day>0 && day <=20)printf("You are Acuario\n");
      else if(day>20 && day<=28)printf("you are picis\n");
      break;
     }
    case 2: // if the month is March
     {
       if(day>=1 && day <= 20)printf("you are picis\n");
       else if(day>=21 && day<=31)printf("you are Aries\n");
       break;
     }
    case 3: //if the month is April
     {
       if(day>=1 && day<=20)printf("You are Aries\n");
       else if(day>=21 && day<=30)printf("you are Tauro\n");
       break;
     }
    case 4: //if the month is May
     {
       if(day>0 & day<=20)printf("you are Tauro\n");
       else if(day > 21 && day <= 31)printf("you are Geminis\n");
       break;
     }
    case 5: //if the month is june
     {
       if(day>0 && day <= 21)printf("you are Geminis\n");
       else if(day > 21 && day <= 30)printf("you are Cancer\n");
       break;
     }
    case 6: //if the month is july
     {
       if(day>0 && day <= 23)printf("You are Cancer\n");
       else if(day >23 && day <= 31)printf("You are Leo\n");
       break;
     }
    case 7: // if the month is August
     {
       if(day>0 && day <= 23)printf("You are Leo\n");
       else if(day>23 && day <=31 )printf("You are Virgo\n");
       break;
     }
    case 8: // if the month is september
      {
       if(day>0 && day <= 23)printf("You are Virgo\n");
       else if(day > 23 && day <= 30)printf("You are Libra\n");
       break;
      }
    case 9: // if the month is October
      {
        if(day>0 && day <= 23)printf("You are Libra\n");
        else if(day>23 && day<=31)printf("You are Escorpio\n");
        break;
      }
     case 10: //if the month is November
      {
        if(day>0 && day<=22)printf("You are Escorpio\n");
        else if(day>22 && day<=30)printf("You are Sagitario\n");
        break;
      }
     case 11: //if the month is December
      {
        if(day>0 && day<=21 )printf("you are Sagitario\n");
        else if(day>21 && day<=31)printf("you are Capricornio\n");
        break;
      }
     default:
         printf("Choose a correct value\n");
  }

  return 0;
}
