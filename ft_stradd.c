#include "libft.h"

char	*ft_stradd(char *s1, char *s2)
{
	char	*tmp;

	tmp = ft_strjoin(s1,s2);
	ft_strdel(&s1);
	return (tmp);
}