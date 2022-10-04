#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int x, i=0, answer=59;
	
	do
	{
	printf("Guess a number: ");
	scanf("%d", &x);
	
	
 	if (x > answer)
	{
		i++;
		printf("high! \n");
	}
			
	else if (x < answer)
	{	
		i++;
		printf("low! \n");
	}

		
	}
	while (x != answer);
	
	i++;
	printf("Congratulation! trials : %d", i);
	
	return 0;
}
