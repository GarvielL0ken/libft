
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int diff;

	while (1)
	{
		diff = *s1 - *s2;
		if (diff == 0 && *s1 != '\0' && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		else
			return (diff);
	}
}
