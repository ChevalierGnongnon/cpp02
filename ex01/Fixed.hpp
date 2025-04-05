/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 11:19:33 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/04 17:25:06 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed{
    private:
        int                 fixed_point;
        static const int    fract_bits = 8;
    public:
        //default constructor
        Fixed();
        //Constructor that takes a const int as param
        Fixed(const int value);
        //Constructor that takes a const-float number as param
        Fixed(const float value);
        //copy constructor
        Fixed(const Fixed &src);
        //copy assignment operator
        Fixed &operator = (const Fixed &otherOne);
        //destructor
        ~Fixed();
        //Getters and setters
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        //Member functions
        float   toFloat(void) const;
        int     toInt(void) const;
};


std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif