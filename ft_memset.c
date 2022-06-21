/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:24:55 by aaslan            #+#    #+#             */
/*   Updated: 2022/05/30 21:44:15 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*s_address;

	s_address = s;
	while (0 < n)
	{
		*(unsigned char *)s = (unsigned char)c;
		s++;
		n--;
	}
	return (s_address);
}
