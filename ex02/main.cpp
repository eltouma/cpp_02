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
		Fixed const b(Fixed(5.05f) * Fixed(2));
		Fixed c(Fixed(5.05f) * Fixed(2));
		Fixed d(24.02f);
		Fixed e(91);
		std::cout << "a > b ?\n";
		if (a > b)
			std::cout << "true " << a <<  " > " << b << "\n";
		else
			std::cout << "false " << a <<  " < " << b << "\n";

		std::cout << "\na < b ?\n";
		if (a < b)
			std::cout << "true " << a <<  " < " << b << "\n";
		else
			std::cout << "false " << a <<  " > " << b << "\n";

		std::cout << "\na >= b ?\n";
		if (a >= b)
			std::cout << "true " << a <<  " >= " << b << "\n";
		else
			std::cout << "false " << a <<  " <= " << b << "\n";

		std::cout << "\na <= b ?\n";
		if (a <= b)
			std::cout << "true " << a <<  " <= " << b << "\n";
		else
			std::cout << "false " << a <<  " >= " << b << "\n";

		std::cout << "\na == b ?\n";
		if (a == b)
			std::cout << "true " << a <<  " == " << b << "\n";
		else
			std::cout << "false " << a <<  " != " << b << "\n";

		std::cout << "\na != b ?\n";
		if (a != b)
			std::cout << "true " << a <<  " != " << b << "\n\n";
		else
			std::cout << "false " << a <<  " == " << b << "\n\n";
		
		std::cout << a << " + 2 = " << (a + 2) << " \n";
		std::cout << a << " - 2 = " << (a - 2) << " \n";
		std::cout << "a * 2 = " << (a * 2) << " \n";
		std::cout << "e * 0 = " << (e * 0) << " \n";
		std::cout << "a / 2 = " << (a / 2)  << " \n\n";
		std::cout <<  "a is " << a << std::endl;
		std::cout << "++a is " << ++a << std::endl;
		std::cout <<  "a is " << a << std::endl;
		std::cout <<  "a++ is " << a++ << std::endl;
		std::cout <<  "a is " << a << std::endl;
		std::cout << "--a is " << --a << std::endl;
		std::cout <<  "a is " << a << std::endl;
		std::cout <<  "a-- is " << a-- << std::endl;
		std::cout <<  "a is " << a << "\n\n";
		std::cout <<  "b is " << b << "\n\n";

		std::cout << "Min is: "  << Fixed::min(a, c) << "\n";
		std::cout << "Min const is: "  << Fixed::min(a, b) << "\n";
		std::cout << "Min is: "  << Fixed::min(d, e) << "\n";
		std::cout << "Min const is: "  << Fixed::min(d, e) << "\n\n";

		std::cout << "Max is: " << Fixed::max(a, c) << "\n";
		std::cout << "Max const is: " << Fixed::max(a, b) << "\n";
		std::cout << "Max is: " << Fixed::max(d, e) << "\n";
		std::cout << "Max const is: " << Fixed::max(d, e) << "\n";
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
