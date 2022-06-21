/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:36:27 by aaslan            #+#    #+#             */
/*   Updated: 2022/06/02 16:38:31 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	temp = (char *)malloc(ft_strlen(s) + 1);
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(temp + i) = f(i, *(s + i));
		i++;
	}
	*(temp + i) = '\0';
	return (temp);
}
