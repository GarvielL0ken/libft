
int ft_strlen(const char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
