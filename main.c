#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int num = 0 ;
	
	printf("문자열을 입력하세요. : ");
	while ((c=getchar()) != '\n')
	{
	  if( c >='0' && c <= '9'){
	  	num = num + 1;
	  }
	}
	
	printf("숫자의 개수는 %i개 입니다.\n", num);
	
}
