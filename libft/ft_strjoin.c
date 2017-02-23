/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heynard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:27:04 by heynard           #+#    #+#             */
/*   Updated: 2017/02/21 18:46:27 by heynard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		str = ft_strnew(len);
		if (str)
		{
			str = ft_strcpy(str, s1);
			str = ft_strcat(str, s2);
			return (str);
		}
	}
	return (NULL);
}
