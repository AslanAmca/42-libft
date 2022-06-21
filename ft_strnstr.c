/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 01:02:25 by aaslan            #+#    #+#             */
/*   Updated: 2022/06/04 15:19:22 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_length;

	if (*s2 == '\0')
		return ((char *)s1);
	s2_length = ft_strlen(s2);
	while (*s1 != '\0' && n >= s2_length)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, s2_length) == 0)
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
