/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsharq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:15:03 by malsharq          #+#    #+#             */
/*   Updated: 2024/09/11 18:48:35 by malsharq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ss;

	ss = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	ft_strlcpy(ss, s, (ft_strlen(s) + 1) * sizeof(char));
	return (ss);
}
