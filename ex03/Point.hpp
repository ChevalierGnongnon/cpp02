/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:24:52 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/08 10:35:46 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point{
    private:
		const Fixed pos_x;
		const Fixed pos_y;
    public:
        Point();
        Point(Fixed pos_x, Fixed pos_y);
        Point(const Point &src);
        ~Point();
		
        Fixed	get_posX() const;
        Fixed	get_posY() const;
		
		
};

bool bsp(Point const a, Point const b, Point const c, Point const p);

#endif
