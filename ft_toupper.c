/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksho <ksho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 16:07:10 by ksho              #+#    #+#             */
/*   Updated: 2023/05/27 16:20:04 by ksho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>
// #include <stdio.h>

int	ft_toupper(int c)
{
	if (96 < c && c < 123)
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	int a = toupper('a');
// 	printf("%c", a);
// }