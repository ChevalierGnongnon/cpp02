/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:43:02 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/08 12:58:30 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	get_area(Point const  a, Point const b, Point const c){
	Fixed	result = (
		a.getX() * (b.getY() - c.getY()) +
		b.getX() * (c.getY() - a.getY()) +
		c.getX() * (a.getY() - b.getY())
	);
	if (result < Fixed(0))
		result = result * Fixed(-1);
	return (result * Fixed(0.5f));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed area_total = get_area(a, b, c);
	Fixed area_one = get_area(a, b, point);
	Fixed area_two = get_area(a, c, point);
	Fixed area_three = get_area(b, c, point);
	
	if (area_one == 0 || area_two == 0 || area_three == 0){
		return (false);
	}
	if (area_one + area_two + area_three == area_total){
		return (true);
	}
	return (false);
}