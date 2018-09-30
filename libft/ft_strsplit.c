#include "libft.h"

int	count_nb_mot(const char *str, char c)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c)
			j++;
		i++;
	}
	return (j);
}

int	count_nb_lettre(const char *str, char c)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (str[i] != c && str[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

char	**ft_strsplit(char const *s, char c)
{
	int	i;
	char	**tabstr;
	int	j;
	int	x;

	x = 0;
	j = 0;
	i = 0;
	if ((tabstr = (char**)malloc(sizeof(tabstr) + count_nb_mot(s, c) + 1)) == NULL)
		return (0);
	while (s[i] != '\0')
	{
		x = 0;
		if ((tabstr[j] = (char*)malloc(sizeof(tabstr[j]) + count_nb_lettre(s + i, c) + 1)) == NULL)
			return (0);
		while (s[i] != c && s[i] != '\0')
		{
			tabstr[j][x] = s[i];
			x++;
			i++;
		}
		tabstr[j][x] = '\0';
		j++;
		i++;
	}
	tabstr[j] = 0;
	return (tabstr);
}
