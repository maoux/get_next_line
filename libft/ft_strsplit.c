/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heynard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:09:23 by heynard           #+#    #+#             */
/*   Updated: 2016/11/29 16:52:32 by heynard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_sizeofsplit(const char *s, char c)
{
	int				i;
	int				ret;

	ret = 0;
	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
		}
		else
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			ret++;
		}
	}
	return (ret);
}

static char			**ft_split(const char *s, char c, char **tab)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;

	i = 0;
	j = 0;
	if (s == NULL)
		return (tab);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			while (s[i] == c)
				i++;
		else
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			tab[j] = ft_strsub(s, start, i - start);
			j++;
		}
		tab[j] = NULL;
	}
	return (tab);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**tab;

	tab = (char **)malloc(sizeof(char *) * ft_sizeofsplit(s, c) + 1);
	if (tab == NULL)
		return (NULL);
	if (s == NULL)
		return (tab);
	tab = ft_split(s, c, tab);
	return (tab);
}
