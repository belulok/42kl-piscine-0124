/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesaging <sesaging@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:41:23 by sesaging          #+#    #+#             */
/*   Updated: 2024/01/28 16:46:14 by sesaging         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ph1;
	int	ph2;

	ph1 = *a / *b;
	ph2 = *a % *b;
	*a = ph1;
	*b = ph2;
}