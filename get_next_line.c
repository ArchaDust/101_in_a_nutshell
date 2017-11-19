#include "get_next_line.h"

static char			*ft_enlarge(char *str, size_t a_bytes)
{
	char			*tmp;
	unsigned int	i;
	
	tmp = str;
	i = 0;
	str = (char *)malloc(sizeof(tmp) + a_bytes);
	while(tmp[i])
		str[i] = tmp[i++];
	free(tmp);
	return (str);
}

static char			*ft_strcdup(char *str, char c)
{
	int				size;
	int				i;
	char			*dup;
	
	size = 0;
	i = 0;
	while (str[size] != c)
		size++;
	dup = malloc(size + 1);
	while (i < size)
		dup[i] = str[i++];
	dup[i] = '\0';
	return (dup);
}
