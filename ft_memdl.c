/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkatelyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:49:51 by kkatelyn          #+#    #+#             */
/*   Updated: 2019/05/02 14:00:10 by kkatelyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memdl(void **ap)
{
	if (ap)
		while (*ap)
		{
			free(*ap);
			ap++;
		}
	free(ap);
	return (0);
}