/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:48:03 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/18 19:13:57 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc > 1)
	{
		std::cout << "Error\nWrong number of argument." << std::endl;
		return (1);
	}
	Fixed	a;
	Fixed 	b;

	Point	p;
	Point	q(2, 4);
	Point	r(q);
	r = p;

	std::cout << "a: " <<  a << std::endl;
	std::cout << "b: " <<  b << std::endl;
	std::cout << "p: " <<  p << std::endl;
	std::cout << "q: " <<  q << std::endl;
	std::cout << "r: " <<  r << std::endl;
	
/*
	try {
		
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
*/
	return (0);
}
