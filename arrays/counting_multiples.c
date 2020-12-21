/******************************************************
	Created by: 
Fernando Tapia

	Name:
Counting multiples
	
	Desciption: 
There are 3 arrays:
'numbers' stores randombly generated numbers
'factors' stores probable bases for the numbers
'counters' stores the amount of numbers which are a 
multiple of the respective factor

The program first generates the 10 random, unique 
numbers, starts factors as the numbers 2 through 6 
and all counters are set to 0. The index of the 
counter corresponds to the index of the factor.

Then for each number which is a multiple of a given 
factor, its corresponding counters increases by one.
******************************************************/

#include <stdio.h>
#include <stdlib.h>

void inicialization(int c[], int f[], int n[]);
void setCounter(int c[], int f[], int n[]);
void printArrays(int c[], int f[], int n[]);

void main(void){
	int counters[5], factors[5], numbers[10];
	inicialization(counters, factors, numbers);
	setCounter(counters, factors, numbers);
	printArrays(counters, factors, numbers);
}

void setCounter(int c[], int f[], int n[]){
	int i, j;
	
	for(i=0; i<5; i++){
		for(j=0; j<10; j++){
			if(n[j] % f[i] == 0){
				c[i]++;
			}
		}
	}
}

void printArrays(int c[], int f[], int n[]){
	int i;
	
	for(i=0; i<10; i++){
		printf("[%i] ", n[i]);
	}
	printf("\n\n");
	
	for(i=0; i<5; i++){
		printf("%i multiples of %i\n", c[i], f[i]);
	}
	
	
}

void inicialization(int c[], int f[], int n[]){
	int i, j;
	time_t t;
	
	srand((unsigned)time(&t));
	
	for(i=0; i<5; i++){
		c[i] = 0;
		f[i] = i+2;
	}
	

	for(i=0; i<10; i++){
		n[i] = (rand()%50)+1;
		
		for(j=0; j<i; j++){
			if(n[i] == n[j]){
				i--;
				break;
			}
		}
	}
	
}
