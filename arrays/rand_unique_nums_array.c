/******************************************************
	Created by: 
Fernando Tapia

	Name:
Random Unique Numbres Array
	
	Desciption: 
10 randombly generated numbers between 1 and 50 will 
be stored in the array, which will then be printed.
The program makes sure not to store the same number 
twice.
******************************************************/

#include <stdio.h>
#include <stdlib.h>

void inicialization();
void fill_array_uniques(int a[]);
void print_array(int a[]);



void main(void){
	int array[10];
	
	inicialization();
	fill_array_uniques(array);
	print_array(array);
}

void inicialization(){
	time_t t;
	srand((unsigned)time(&t));
}

void fill_array_uniques(int a[]){
	int i, j;
	
	for(i=0; i<10; i++){
		a[i] = (rand()%50)+1;
		
		for(j=0; j<i; j++){
			if(a[i] == a[j]){
				i--;
				break;
			}
		}
	}
	
}

void print_array(int a[]){
	int i;
	
	for(i=0; i<10; i++){
		printf("[%i] ", a[i]);	
	}
	printf("\n");
}
