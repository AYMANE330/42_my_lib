/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p2darray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayel-fil <ayel-fil@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:20:35 by ayel-fil          #+#    #+#             */
/*   Updated: 2023/05/21 18:02:40 by ayel-fil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "additional.h"

void	ft_p2darray(char **array, int fd)
{
	int	i;

	i = 0;
	while (array[i])
		ft_putendl_fd(array[i++], fd);
}
