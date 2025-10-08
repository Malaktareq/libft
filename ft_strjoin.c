/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsharq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:37:43 by malsharq          #+#    #+#             */
/*   Updated: 2024/09/08 15:47:25 by malsharq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	void	*a;

	a = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!a)
		return (NULL);
	ft_strlcpy(a, s1, ft_strlen(s1) + 1);
	ft_strlcpy(a + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return ((char *)a);
}
