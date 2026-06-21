int	is_safe(int *board, int row, int col, int num);
int	check_clues(int *board, int *clues);

int	solve(int *board, int pos, int *clues)
{
	int	row;
	int	col;
	int	num;

	if (pos == 16)
		return (check_clues(board, clues));
	row = pos / 4;
	col = pos % 4;
	num = 1;
	while (num <= 4)
	{
		if (is_safe(board, row, col, num))
		{
			board[pos] = num;
			if (solve(board, pos + 1, clues))
				return (1);
			board[pos] = 0;
		}
		num++;
	}
	return (0);
}