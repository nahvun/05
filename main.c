#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	int x, i, sum;
	
	sum = 0;
	
	printf("input a number:");
	scanf("%d", &x);
	
	for (i = 0 ; i <= x ; i++)
	{
		sum += i;
	}
	
	printf("The result is : %d", sum);
	
	
	
	return 0;
}
