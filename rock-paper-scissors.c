#include <stdio.h>
#include <ctype.h>

int main()
{
	char		player1;
	char		player2;

	printf("Player1 enter your choice R/P/S: ");
	scanf(" %c", &player1);
	player1 = toupper(player1);
	printf("Payer2 enter your choice R/P/S: ");
	scanf(" %c", &player2);
	player2 = toupper(player2);
	if ((player1 == 'R' && player2 == 'S') || (player1 == 'S' && player2 == 'P')
		|| (player1 == 'P' && player2 == 'R'))
		printf("Player1 wins\n");
	else if ((player2 == 'R' && player1 == 'S') || (player2 == 'S' && player1 == 'P')
		|| (player2 == 'P' && player1 == 'R'))
		printf("Player2 wins\n");
	else
		printf("It's a tie\n");
	return 0;
}