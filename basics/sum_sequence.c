/******************************************************
	Created by: 
Fernando Tapia

	Name:
Sum Sequence
	
	Desciption: 
For every positive integer up to 1000, all of the 
series of consecutive numbers that add up to that 
number are saved into a text file
******************************************************/

#include <stdio.h>

void print_sequence(int target, int start, FILE *fp);

void main(void){
	int target, i, j, sum;
	FILE *fp;
	
	fp = fopen("up_to_1000.txt", "w");
	
	for(target=0; target<=1000; target++){
		fprintf(fp, "Target: %d\n", target);
		
		for(i=(target/2)+1; i; i--){
			sum=0;
			
			for(j=i; sum<target; j++){
				sum+=j;
			}
			
			if(sum == target && j-i>1){
				print_sequence(target, i, fp);
			}
		}
		fprintf(fp, "\n");	
	}	
	fclose(fp);
	printf("Done!\n");
}

void print_sequence(int target, int start, FILE *fp){
	int sum;
	for(sum=0; sum<target; start++){
		if(sum>0){
			fprintf(fp, "+ ");
		}
		fprintf(fp, "%d ", start);
		sum+=start;
	}
	
	fprintf(fp, "= %d\n", sum);
}
