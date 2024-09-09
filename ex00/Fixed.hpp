/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:48:56 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/09 16:53:26 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class 	Fixed
{
	int	_fixedPoint;
	static const int	_bits;

public:
	Fixed(void);
	~Fixed(void);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};
