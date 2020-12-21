/******************************************************
	Created by: 
Fernando Tapia

	Name:
Dice Race
	
	Desciption: 
2 players "roll" a dice in a race to reach the score 
goal within the number of available turns. The values 
are displayed as they go up.
******************************************************/

#include <stdio.h>
#include <stdlib.h>

void inicialization();
void roll_dice(int *player, int player_number);
int getWinner(int p1, int p2);
void showBoard(int p1, int p2, int t);

#define GOAL 20
#define MAX_TURNS 5

void main(void){
	int player1=0, player2=0, turn, winner=0;
   
   	inicialization();
   
   	for(turn=1; !winner && turn<=MAX_TURNS*2; turn++){
   		showBoard(player1, player2, turn);
   		printf("Press 'enter' to continue");
	   	getchar();
		if((turn%2)){
			roll_dice(&player1, 1);
		}
		else{
			roll_dice(&player2, 2);
		}
		winner=getWinner(player1, player2); 
		getchar();
	}
	   
   	showBoard(player1, player2, turn);
   	if(winner){
   		printf("\nCongratulations Player %i!!", winner);
   	}
   	else{
   		printf("\nNo more turns left. Tie!");
   	}
}

void roll_dice(int *player, int player_number){
	int roll;
	roll = (rand()%6)+1;
	*player += roll;
	
	printf("Player %i  +%i", player_number, roll);
}

void showBoard(int p1, int p2, int t){
	int i;
	
	system("clear");
	
	if(t && t<=MAX_TURNS*2){
		printf("Turn %i", t);
	}
	printf("\n\n");
	
	for(i=GOAL; i; i--){
		printf("%.2i | ", i);
		
		if(p1 >= i){
			printf("########  ");
		}
		else{
			printf("          ");
		}
		
		if(p2 >= i){
			printf("########\n");
		}
		else{
			printf("        \n");
		}
	}
	printf("---|----------------------\n");
	printf("   | Player1  Player2\n\n\n");
}

int getWinner(int p1, int p2){
	if(p1 >= GOAL){
		return 1;
	}
	
	if(p2 >= GOAL){
		return 2;
	}
	
	return 0;
}

void inicialization(){
	time_t t;
	srand((unsigned)time(&t));
}

