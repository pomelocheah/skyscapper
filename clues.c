int	visible_count(int *arr);

static int	check_rows(int *board, int *clues)
{
	int	row[4];
	int	rev[4];
	int	r;
	int	c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			row[c] = board[r * 4 + c];
			rev[c] = board[r * 4 + (3 - c)];
			c++;
		}
		if (visible_count(row) != clues[8 + r])
			return (0);
		if (visible_count(rev) != clues[12 + r])
			return (0);
		r++;
	}
	return (1);
}

static int	check_cols(int *board, int *clues)
{
	int	col[4];
	int	rev[4];
	int	r;
	int	c;

	c = 0;
	while (c < 4)
	{
		r = 0;
		while (r < 4)
		{
			col[r] = board[r * 4 + c];
			rev[r] = board[(3 - r) * 4 + c];
			r++;
		}
		if (visible_count(col) != clues[c])
			return (0);
		if (visible_count(rev) != clues[4 + c])
			return (0);
		c++;
	}
	return (1);
}

int	check_clues(int *board, int *clues)
{
	if (!check_rows(board, clues))
		return (0);
	if (!check_cols(board, clues))
		return (0);
	return (1);
}