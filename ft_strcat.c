/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkatelyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:09:18 by kkatelyn          #+#    #+#             */
/*   Updated: 2019/04/11 14:12:16 by kkatelyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t j;

	j = -1;
	i = 0;
	while (s1[i])
		i++;
	while (s2[++j])
		s1[i++] = s2[j];
	s1[i] = '\0';
	return (s1);
}
