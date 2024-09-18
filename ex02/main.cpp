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
//		Fixed const b(10);
//		Fixed const b(83886010);
//		Fixed const c(42.42f);
//		Fixed const d(b);

	//	a = Fixed(1234.4321f);
	  	a = Fixed(10);
	 // 	a = Fixed(0);
/*
		if (a > b)
			std::cout << "true a > b\n";
		else
			std::cout << "false a pas > b\n";

		if (a < b)
			std::cout << "true a < b\n";
		else
			std::cout << "false a pas < b\n";

		if (a >= b)
			std::cout << "true a >= b\n";
		else
			std::cout << "false a pas >= b\n";

		if (a <= b)
			std::cout << "true a <= b\n";
		else
			std::cout << "false a pas <= b\n";

		if (a == b)
			std::cout << "true a == b\n";
		else
			std::cout << "false a pas == b\n";

		if (a != b)
			std::cout << "true a != b\n";
		else
			std::cout << "false a pas != b\n";
		std::cout << "a / 2 = " << (a / 2) << " bitch\n";
*/
//		Fixed m = a + 3;
	//	std::cout << "a + 3 = " << m << " bitch\n";
		std::cout << a << "  + 3 = " << (a + 2) << " bitch\n";
//		std::cout << a << " - 2 = " << (a - 2) << " bitch\n";
	//	std::cout << "a * 2" << (a * 2) << " bitch\n";
	//	std::cout << "a / 0" << (a / 0)  << "NO BITCH\n";
	/*		
		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;
		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
*/
	}
	catch (std::invalid_argument& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
