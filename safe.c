int	is_safe(int *board, int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row * 4 + i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (board[i * 4 + col] == num)
			return (0);
		i++;
	}
	return (1);
}