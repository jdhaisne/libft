#include "libft.h"

size_t	ft_strlenrc(const char *s, char c)
{
	int i;

	i = ft_strlen(s);
	while (i > 0 && s[i] != c)
		i--;
	return (i);
}
