#include<stdio.h>
union CricketTeam
{
char playerName[50];
int jerseyNumber;
float battingAvg;
};
int main()
{
union CricketTeam team;
printf("Enter player name:");
scanf("%[^\n]",team.playerName);
printf("Player Name:%s\n",team.playerName);
printf("Enter jersey number:");
scanf("%d",&team.jerseyNumber);
printf("Jersey Number:%d\n",team.jerseyNumber);
printf("Enter batting average:");
scanf("%f",&team.battingAvg);
printf("Batting Average:%2f\n",team.battingAvg);
return 0;
}
