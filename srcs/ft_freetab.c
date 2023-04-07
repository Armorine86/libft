/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmondell <mmondell@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:41:22 by mmondell          #+#    #+#             */
/*   Updated: 2021/11/04 14:43:12 by mmondell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_freetab(char **tab)
{
	int	i = 0;

	if (tab)
	{
		while (tab[i])
			free(tab[i++]);	
		free(tab);
	}
}
