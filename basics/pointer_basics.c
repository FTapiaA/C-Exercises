/******************************************************
	Created by: 
Fernando Tapia

	Name:
Pointer Basics
	
	Desciption: 
This codes purpose is to teach the basics of pointers
and to be an introductions to types and levels of 
variables
******************************************************/

#include <stdio.h>

void main(void){
	int x;
	int *p;
	
	/*set values*/
	x = 1;
	p = &x; 
	//p points to x
	
	/*Print memory address of variables*/
	printf("Memory Addresses (&):\n");
	printf("&x = %x (int *)\n", &x);
	printf("&p = %x (int **)\n\n", &p);
	
	
	/*Print values of variables*/
	printf("Value stored:\n");
	printf("x = %d (int)\n", x);
	printf("p = %x (int *)\n\n", p);
	
	/*Print value being pointed to*/
	printf("Value being pointed to:\n");
	printf("*p = %d\n\n", *p);
	
	/*New value*/
	printf("Assign new value using the pointer:\n");
	*p = 3;
	printf("New instruction: *p = 3\n");
	printf("x = %d (int)\n", x);
	printf("p = %x (int *)\n\n\n\n", p);
	
	
	
	/*Notes*/
	printf("Notes:\n");
	printf("(x = 1) The value '1' is type 'int', therefore we need a variable declared as 'int' to store that value\n");
	printf("(p = &x) The memory address of 'x' is type 'int *', therefore we need a variable declared as 'int *' to store that value\n");
	printf("(p = &x) The value stored in p is equal to &x, which means that p points to x\n");
	printf("(*p = x) Since p is pointing to x, if we use the *, we access the value stored in x\n");
	printf("(*p = 3) Since p is pointing to x, if we use the * and assign a new value we see we actually changed the value stored in x while the value stored in 'p' is the same, we are still pointing to 'x'\n");

}
