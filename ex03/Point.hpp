/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:24:52 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/07 12:12:07 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point{
    private:
		Fixed pos_x;
		Fixed pos_y;
    public:
        Point();
        Point(Fixed pos_x, Fixed pos_y);
        Point(const Point &src);
        Point &operator = (const Point &otherOne);
        ~Point();
		
        Fixed	get_posX() const;
        Fixed	get_posY() const;
		void	set_posX(const Fixed &x);
		void	set_posY(const Fixed &y);
		
};

#endif
