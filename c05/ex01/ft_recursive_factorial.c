/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asacchin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:25:32 by asacchin          #+#    #+#             */
/*   Updated: 2022/11/03 22:25:38 by asacchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	else if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (result);
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}
*/
