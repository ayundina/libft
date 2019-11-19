/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ayundina <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/25 16:11:30 by ayundina      #+#    #+#                 */
/*   Updated: 2019/01/25 16:48:06 by ayundina      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	ft_putnbr(int n)
=======
void	ft_putnbr(long long n)
>>>>>>> refs/remotes/origin/master
{
	if (n < 0)
	{
		write(1, "-", 1);
<<<<<<< HEAD
		if (n == -2147483648)
		{
			write(1, "2", 1);
			n = -147483648;
		}
=======
>>>>>>> refs/remotes/origin/master
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}
