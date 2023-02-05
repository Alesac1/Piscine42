/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:23:59 by asacchin          #+#    #+#             */
/*   Updated: 2022/10/31 20:44:05 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
// int    main()
// {
//     printf("%d", ft_str_is_numeric("01948987493"));
//     printf("\n%d", ft_str_is_numeric("0484882j8995489"));
//     printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
// }
