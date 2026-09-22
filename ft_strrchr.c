#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	target;

	i = (int)ft_strlen(s);
	target = (char)c;
	while (i >= 0)
	{
		if (s[i] == target)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
