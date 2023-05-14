/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouaa <aelbouaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:39:35 by aelbouaa          #+#    #+#             */
/*   Updated: 2023/02/17 10:53:39 by aelbouaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, int start, int len)
{
	char	*m;
	char	*ss;
	size_t	x;

	ss = (char *)s;
	if (!s)
		return (0);
	if (ft_strlen(ss) <= start || len == 0)
		return (ft_strdup(""));
	if (len > ft_strlen(ss) - start)
		len = ft_strlen(ss) - start;
	m = (char *)malloc((len + 1) * sizeof(char));
	if (!m)
		return (NULL);
	m[len] = '\0';
	x = 0;
	while (ss && len)
	{
		m[x] = ss[start + x];
		x++;
		len--;
	}
	return (m);
}
