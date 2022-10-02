/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhamako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:45:11 by mzhamako          #+#    #+#             */
/*   Updated: 2022/10/02 17:29:48 by mzhamako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	drow_line(int lar, char d, char m, char f)
{
	int	j;

		j = 0;
	while (j < lar)
	{
		if (j == 0)
			ft_putchar(d);
		else
		{
			if (j == lar - 1)
				ft_putchar(f);
			else
				ft_putchar(m);
		}
			j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			drow_line(x, 'A', 'B', 'C');
		else
		{
			if (i == y - 1)
				drow_line(x, 'C', 'B', 'A' );
			else
				drow_line(x, 'B', ' ', 'B' );
		}
		i++;
	}
}
