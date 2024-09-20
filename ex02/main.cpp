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
		Fixed c(10);
//		Fixed const b(83886010);
//		Fixed const c(42.42f);
//		Fixed const d(b);

	//	a = Fixed(1234.4321f);
//	  	a = Fixed(10);
	 // 	a = Fixed(0);
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
		std::cout << "Max is: " << Fixed::max(a, c) << "\n";
		// std::cout << "a / 0 = " << (a / 0)  << " \n\n";
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
