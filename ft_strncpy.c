/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:07:54 by mnaim             #+#    #+#             */
/*   Updated: 2025/02/12 16:42:07 by mnaim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>

int main()
{
	char src[] = "Salut, Monde!";
	char dest[20];

	ft_strncpy(dest, src, 10);
	printf("Result: %s\n", dest); 
	return 0;
}
*/
