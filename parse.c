int	parse_input(char *str, int *clues)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (i >= 16)
			return (0);
		if (*str < '1' || *str > '4')
			return (0);
		clues[i++] = *str - '0';
		str++;
		if (i < 16)
		{
			if (*str != ' ')
				return (0);
			str++;
		}
	}
	return (i == 16);
}