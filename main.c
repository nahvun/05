#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	int x, y; 
	char a;   //연산자 문자  
	int result;
	
	
	printf("enter the calculation: ");
	scanf("%d %c %d", &x, &a, &y);
	
	if (a =='+')
		result = x + y;
		
	else if (a =='-')
		result = x - y;
		
	else if (a =='*')
		result = x * y;
		
	else if (a =='/')
		result = x / y;
	
	
	
	printf("=%i\n", result);
	
	

	
	return 0;
}
