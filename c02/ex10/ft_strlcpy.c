/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:41:43 by asacchin          #+#    #+#             */
/*   Updated: 2022/10/31 12:41:45 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char	*dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	r;

	i = 0;
	r = 0;
	while (src[r])
	{
		r++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (r);
}
