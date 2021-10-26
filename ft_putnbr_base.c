/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:44:59 by armorine          #+#    #+#             */
/*   Updated: 2021/10/26 11:12:02 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(long long num, int base_len, char *base, int fd)
{
	char	c;

	if (num >= base_len)
		ft_putnbr_base(num / base_len, base_len, base, fd);
	c = base[(num % base_len)];
	write(fd, &c, 1);
}
