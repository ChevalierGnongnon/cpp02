/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:34:37 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/07 15:38:53 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


int main(void){
	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(10), Fixed(0));
	Point c(Fixed(5), Fixed(10));

	Point inside(Fixed(5), Fixed(5));     // inside the triangle
	Point outside(Fixed(15), Fixed(5));   // clearly outside
	Point edge(Fixed(5), Fixed(0));       // on the base edge

	if (bsp(a, b, c, inside))
		std::cout << "Point inside: true" << std::endl;
	else
		std::cout << "Point inside: false" << std::endl;

	if (bsp(a, b, c, outside))
		std::cout << "Point outside: true" << std::endl;
	else
		std::cout << "Point outside: false" << std::endl;

	if (bsp(a, b, c, edge))
		std::cout << "Point on edge: true" << std::endl;
	else
		std::cout << "Point on edge: false" << std::endl;

	return 0;
}