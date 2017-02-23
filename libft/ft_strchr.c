/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heynard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 18:36:25 by heynard           #+#    #+#             */
/*   Updated: 2016/12/12 12:34:07 by heynard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (0);
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
