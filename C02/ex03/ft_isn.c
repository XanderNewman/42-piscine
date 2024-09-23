#include <stdio.h> 

int ft_str_is_numeric(char *str)
{
	int i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return 0;
		i++;
	}
	return 1;
}

int main()
{
	printf("a: %d\n", ft_str_is_numeric("a"));
	printf("1: %d\n", ft_str_is_numeric("1"));
	printf("vacio: %d\n", ft_str_is_numeric(""));
	printf("a1: %d\n", ft_str_is_numeric("a1"));
}
