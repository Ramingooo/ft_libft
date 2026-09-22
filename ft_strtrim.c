#include "libft.h"
#include <stdlib.h>

static int	is_trash(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_trash(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_trash(s1[end - 1], set))
		end--;
	return (ft_substr(s1, start, end - start));
}
