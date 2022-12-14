/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelmas <hdelmas@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:13:22 by hdelmas           #+#    #+#             */
/*   Updated: 2022/10/14 09:58:50 by hdelmas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*res;

	len = -1;
	i = -1;
	while (s[++len])
		;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	while (s[++i])
	{
		res[i] = s[i];
	}
	res[i] = '\0';
	return (res);
}
