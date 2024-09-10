/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:35:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/10 17:33:26 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed&)
{
	std::cout << "Copy TA MERE constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructed called" << std::endl;
}
