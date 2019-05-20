int ft_atoi(const char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		n = n + (*str - '0');
		n *= 10;
		str++;
	}
	n = n / 10;
	return (n);
}
