#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int x;
	int trials = 0;
	
	do
	{
		printf("Guess a number : ");
		scanf("%d", &x);
		trials = trials + 1;
		if(x>answer){
			printf("high!\n");
		}
		if(x<answer){
			printf("low!\n");
		}
		 
	}
	while (x != answer);
	
	printf("Number of trials = %i\n", trials);
	
	return 0 ;
}

