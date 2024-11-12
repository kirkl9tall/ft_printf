/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:44:33 by abismail          #+#    #+#             */
/*   Updated: 2024/11/13 00:08:55 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	puthexnbr(int n)
{
	char	*p;
	char	pfinal[20];
	int		x;
	int		mod;
	int		h;

	if (n == 0)
		write(1, "0", 1);
	x = 0;
	h = n;
	p = "0123456789abcdef";
	while (h != 0)
	{
		h = h / 16;
		x++;
	}
	while (n != 0)
	{
		mod = n % 16;
		n = n / 16;
		pfinal[x - 1] = p[mod];
		x--;
	}
	while (pfinal[x])
		write(1, &pfinal[x++], 1);
}

int	main(void)
{
	//puthexnbr(530545434);
	//printf("\n%x\n", 530545434);
    printf("10%% \n");
    
}