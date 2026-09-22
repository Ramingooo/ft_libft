#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	divisor;
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	divisor = 1;
	while (num / divisor > 9)
		divisor = divisor * 10;
	while (divisor > 0)
	{
		ft_putchar_fd((num / divisor) + '0', fd);
		num = num % divisor;
		divisor = divisor / 10;
	}
}
