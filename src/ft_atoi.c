int     ft_atoi(char *str)
{
	int i;
	int is_neg;
	int result;  
	int cur;

  i = 0;
  is_neg = 0;
  result = 0;

	while (str[i] >= 0 && str[i] <= 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		cur = str[i] - '0';
		result = result * 10;
		result = result + cur;
		i++;
	}
	if (is_neg == 1)
		result *= -1;
	return (result);
}
