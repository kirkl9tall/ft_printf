/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abismail <abismail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:44:33 by abismail          #+#    #+#             */
/*   Updated: 2024/11/14 00:10:30 by abismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

static int   count (unsigned  int n)
{
	int x;
	
	x = 0;
	while (n != 0)
	{
		n = n / 16;
		x++;
	}
	return (x);
}
int	puthexnbr(unsigned int n)
{
	char	*p;
	char	pfinal[20];
	int		x;
	int		mod;

	if (n == 0)
		write(1, "0", 1);
	x = count(n);
	p = "0123456789abcdef";
	while (n != 0)
	{
		mod = n % 16;
		n = n / 16;
		pfinal[x - 1] = p[mod];
		x--;
	}
	while (pfinal[x])
		write(1, &pfinal[x++], 1);
	return (x);
}

int	main(void)
{
	printf ("%d\n",puthexnbr(645645));
	printf("\n%x\n", 645645);
 //   printf("10%% \n");
    
}