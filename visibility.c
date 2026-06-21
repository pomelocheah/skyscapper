int	visible_count(int *arr)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			count++;
		}
		i++;
	}
	return (count);
}