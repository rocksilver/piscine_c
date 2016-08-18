int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int len_s1;
	int len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s1 < len_s2)
		return (-1);
	else if (len_s1 == len_s2)
		return (0);
	else
		return (1);
}
