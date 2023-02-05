/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:11:28 by asacchin          #+#    #+#             */
/*   Updated: 2022/10/31 19:11:36 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	contatore(char	*str)
{
	int	count;
	int	x;

	x = 0;
	count = 0;
	while (str[x] != '\0')
	{
		count++;
		x++;
	}
	return (count);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= contatore(dest))
		return (size + contatore(src));
	c = contatore(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (contatore(dest) + contatore(&src[d]));
}
