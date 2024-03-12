#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get computer choice
int	generate_computer_move()
{
	srand(time(NULL));

	return rand() % 3 + 1;
}

int main()
{
	char	user_choice[][10] = {"", "Rock", "Paper", "Scissors"};
	int		computer_move;
	int		user_move;

	printf("Hello Welcome to the Rock Paper Scissors game\n");
	printf("Enter your choice:\n 1.Rock\n 2.Paper\n 3.Scissors\n");
	scanf("%d", &user_move);

	if (user_move < 1 || user_move > 3)
	{
		printf("Invalid move. Please choose 1, 2 or 3\n");
		return 1;
	}

	computer_move = generate_computer_move();
	printf("You chose %s\n", user_choice[user_move]);
	printf("Computer chose %s\n", user_choice[computer_move]);

	if (user_move == computer_move)
		printf("It's a tie\n");
	else if ((user_move == 1 && computer_move == 3) || (user_move == 2 && computer_move == 1)
		|| (user_move == 3 && computer_move == 2))
		printf("You wins\n");
	else
	{
		printf("Computer wins\n");
	}
	return 0;	
}