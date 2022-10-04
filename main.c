#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum = 0;
	int x;
	int i;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	
	for(i=0; i<=x; i++){
		sum = sum + i ;
	}
	
	printf("더하기 결과는 %i입니다. \n", sum);
	return 0 ;
}

