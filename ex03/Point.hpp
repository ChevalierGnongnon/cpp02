/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:24:52 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/08 12:47:29 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point{
    private:
		const Fixed x;
		const Fixed y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &src);
        ~Point();
		
        Fixed	getX() const;
        Fixed	getY() const;
		Point	&operator=(const Point &otherOne);	
};

bool bsp(Point const a, Point const b, Point const c, Point const p);

#endif
