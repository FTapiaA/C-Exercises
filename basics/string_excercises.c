/******************************************************
	Created by: 
Fernando Tapia

	Name:
String Excercises
	
	Desciption:
Shows 4 functions:
	'howMany' returns how many times a char apears 
		in the string
	'toUppercase' turns the string to uppercase 
	'toLowercase' turns the string to lowercase
	'isPalindrome' return 1 if the string is a
		palindrome and 0 if it's not
******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int howMany(char *str, char findMe);
void toUppercase(char *str);
void toLowercase(char *str);
int isPalindrome(char *str);

void main(void){
	char str[50], findMe;
	
	printf("Insert String:\n");
	fgets(str, 50, stdin);
	str[strlen(str) - 1] = '\0';
	printf("Original: %s\n", str);
	printf("Character to look for :");
	scanf("%c", &findMe);
	getchar();
	printf("There are %i '%c's in the string\n\n", howMany(str, findMe), findMe);
	
	toUppercase(str);
	printf("Uppercase: %s\n", str);
	toLowercase(str);
	printf("Lowercase: %s\n", str);
	
	if(isPalindrome(str)){
		printf("The string is a palindrome\n");
	}
	else{
		printf("The string is NOT a palindrome\n");
	}
}

void toUppercase(char *str){
	int i;
	
	for(i=0; str[i]!='\0'; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i]-=32;
		}
	}	
}

void toLowercase(char *str){
	int i;
	
	for(i=0; str[i]!='\0'; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i]+=32;
		}
	}	
}

int isPalindrome(char *str){
	int i, j;
	
	j=strlen(str)-1;
	for(i=0; i<=j; i++){
		while(str[i] == ' '){
			i++;
		}
		
		while(str[j] == ' '){
			j--;
		}
		
		if(str[i] != str[j]){
			return 0;
		}
		
		j--;
	}
	
	return 1;
}

int howMany(char *str, char findMe){
	int i, found=0;
	
	for(i=0; str[i]!='\0'; i++){
		if(str[i] == findMe){
			found++;
		}
	}	
	
	return found;
}
