int		ft_atoi(char *str)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			nb = nb * 10 + (str[i] - 48);
		}
		i++;
	}
	return (nb);
}
