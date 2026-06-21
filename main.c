#include <unistd.h>

int		parse_input(char *str, int *clues);
int		solve(int *board, int pos, int *clues);
void	print_board(int *board);

int	main(int argc, char **argv)
{
	int	board[16];
	int	clues[16];
	int	i;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!parse_input(argv[1], clues))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	while (i < 16)
		board[i++] = 0;
	if (!solve(board, 0, clues))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_board(board);
	return (0);
}