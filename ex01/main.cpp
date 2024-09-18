/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:48:03 by eltouma           #+#    #+#             */
/*   Updated: 2024/09/18 16:49:18 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc > 1)
	{
		std::cout << "Error\nWrong number of argument." << std::endl;
		return (1);
	}
	try {
		Fixed	a;
		Fixed const b(10);
		//Fixed const b(83886010);
		Fixed const c(42.42f);
		Fixed const d(b);

		a = Fixed(1234.4321f);
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
