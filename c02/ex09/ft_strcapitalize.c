/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:25:52 by asacchin          #+#    #+#             */
/*   Updated: 2022/10/31 12:25:54 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	unsigned int	a;

	ft_strlowcase(str);
	i = 0;
	a = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (a == 1)
			{
				str[i] = str[i] - 32;
				a = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			a = 0;
		else
			a = 1;
		i++;
	}
	return (str);
}
