/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ayundina <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/30 12:39:20 by ayundina      #+#    #+#                 */
/*   Updated: 2019/01/30 12:54:09 by ayundina      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
<<<<<<< HEAD
	if (as)
=======
	if (*as)
>>>>>>> refs/remotes/origin/master
	{
		free(*as);
		*as = NULL;
	}
}
