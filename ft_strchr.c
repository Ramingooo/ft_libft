#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	target;

	i = 0;
	target = (char)c;
	while (s[i])
	{
		if (s[i] == target)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == target)
		return ((char *)&s[i]);
	return (NULL);
}
