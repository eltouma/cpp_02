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
	Point point;

	Point const	a(0,0);
	Point const	b(20, 0);
	Point const	c(10, 30);
	Point const	p1(10, 15);
	Point const	p2(25, 20);
	Point const	p3(5, 5);
	Point const	p4(2.5, 20);
	Point const	p5(15, 15);
	Point const	p6(10, 30);
	Point const	p7(15, 5);
	Point const	p8(10, 2.5);
	Point const	p9(-5, -5);
	Point const	p10(-15, 15);
	Point const	p11(5, -5);
	Point const	p12(0.1, 5);
	Point const	p13(0.1, 0.1);

	point.bsp(a, b, c, p1);
	point.bsp(a, b, c, p2);
	point.bsp(a, b, c, p3);
	point.bsp(a, b, c, p4);
	point.bsp(a, b, c, p5);
	point.bsp(a, b, c, p6);
	point.bsp(a, b, c, p7);
	point.bsp(a, b, c, p8);
	point.bsp(a, b, c, p9);
	point.bsp(a, b, c, p10);
	point.bsp(a, b, c, p11);
	point.bsp(a, b, c, p12);
	point.bsp(a, b, c, p13);
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
