//this is a program to play "Paper,Rock or scissors between two players
//Player A and B
#include <stdio.h>
int main()
{
   int player_a, player_b, i;
   char *objects[] = {"sicssors","paper","Rock"};
   printf("Time to play, choose one\n");

  for(i=0;i<3;i++)
  {
    printf("[%d] %s \n", i, objects[i]);
  }

  printf("turn play A: ");
  scanf("%d", &player_a);
  printf("turn play B: ");
  scanf("%d", &player_b);

      if(player_a== player_b)printf("tie both are the same\n");

      else if(player_a==0)
      {
        if(player_b==1) printf("sicssors win paper, player A win\n");
        else if(player_b==2)printf("rock wins sicssors, player B win\n");
      }
      else if(player_a==1)
      {
        if(player_b==0)printf("sicssor win paper, player B win\n");
        else if(player_b==2)printf("paper wins rock, player A win\n");
      }
      else if(player_a==2)
      {
        if(player_b==0) printf("rock wins sicssor, player A win\n");
        else if(player_b==1) printf("paper wins rock, player B win\n");
      }



   return 0;
}
