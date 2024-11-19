int	ft_atoi(const char *nptr)
{
	int	result;
	int	m;

	result = 0;
	m = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	while (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			m *= -1;
		nptr++;
		if (*nptr == '+' || *nptr == '-')
			return (0);
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		result = (result * 10) + (*nptr - 48);
		nptr++;
	}
	return (result);
}
