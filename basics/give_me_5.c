/******************************************************
	Created by: 
Fernando Tapia

	Name:
Give me 5	
	
	Desciption: 
This code is an example of the usage of pointers,
return values, and if else statements, amung others.
There are 3 different messages to be printed depending
on the number of attempts it takes for the user to 
give a 5. One for 1 attempts, one for 2 attempts and 
a third one if it takes more attempts than that.
******************************************************/

#include <stdio.h>

int set_value(int *x);

int main(void){
	int x, attempts;	
	
	printf("Give me 5\n");
	attempts = set_value(&x);
	
	if(attempts <= 2){
		printf("\nThanks for giving me %d.\n", x);
		if(attempts == 1){
			printf("Have a nice day :)\n");
		}
	}
	else{
		printf("\nFinally...  :/\n");
	}
}

int set_value(int *x){
	int attempts = 1;
		
	do{
		printf(">");
		scanf("%d", x);
		if(*x != 5){
			attempts++;;
			printf("Seriously? I said give me 5:\n");
		}
	}while(*x != 5);
	
	return attempts;	
}
