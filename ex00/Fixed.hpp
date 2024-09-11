/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:48:56 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/11 19:48:27 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class 	Fixed
{
	int	_fixedPoint;
	static int const	_bits;

public:
	Fixed(void);
	Fixed(const Fixed& obj);
	~Fixed(void);
	Fixed & operator=(const Fixed& rhs);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};
