#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int cnt=0;
	
	printf("input a string: ");

	
	while(( c = getchar() ) != '\n')  //입력 문자가 개행문자가 나올 때까지 반복 
	{
		//입력된 글자가 숫자인가?
			//그렇다면 하나를센다. 
		if ( c >= '0' && c <= '9')
			cnt++; 		
		
	}
	
	printf("the number of digits is %d", cnt);
	
	
	return 0;
}
