/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:43:02 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/07 14:38:11 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	get_area(const Point &a, const Point &b, const Point &c){
	Fixed	result = (
		a.get_posX() * (b.get_posY() - c.get_posY()) +
		b.get_posX() * (c.get_posY() - a.get_posY()) +
		c.get_posX() * (a.get_posY() - b.get_posY())
	);
	if (result < Fixed(0))
		result = result * Fixed(-1);
	return (result * Fixed(0.5f));
}

bool	bsp(Point &a, Point &b, Point &c, Point &p){
	Fixed area_total = get_area(a, b, c);
	Fixed area_one = get_area(a, b, p);
	Fixed area_two = get_area(a, c, p);
	Fixed area_three = get_area(b, c, p);
	
	if (area_one == 0 || area_two == 0 || area_three == 0){
		return (false);
	}
	if (area_one + area_two + area_three == area_total){
		return (true);
	}
	return (false);
}