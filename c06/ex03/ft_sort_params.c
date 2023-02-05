/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:07:26 by asacchin          #+#    #+#             */
/*   Updated: 2022/11/03 12:07:29 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != 0)
		write(1, &str[i], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		c;

	c = 0;
	while ((s1[c] == s2[c]) && ((s1[c] != 0) || (s2[c] != 0)))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_sort(char **argv)
{
	int		c;
	int		i;
	char	*temp;

	c = 0;
	while (argv[++c])
	{
		i = c;
		while (argv[++i])
		{
			if (ft_strcmp(argv[c], argv[i]) > 0)
			{
				temp = argv[c];
				argv[c] = argv[i];
				argv[i] = temp;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	ft_sort(argv);
	i = 0;
	while (argv[++i] != 0)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
