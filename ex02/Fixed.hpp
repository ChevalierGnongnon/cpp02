/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 11:28:33 by chhoflac          #+#    #+#             */
/*   Updated: 2025/04/05 22:55:57 by chhoflac         ###   ########.fr       */
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
        //comparition operators
		bool	operator<=(const Fixed &otherOne) const;
		bool	operator<(const Fixed &otherOne) const;
		bool	operator>=(const Fixed &otherOne) const;
		bool	operator>(const Fixed &otherOne) const;
		bool	operator!=(const Fixed &otherOne) const;
		bool 	operator==(const Fixed &otherOne) const;
		//arithmethic operators
		Fixed	operator+(const Fixed &otherOne) const;
		Fixed	operator-(const Fixed &otherOne) const;
		Fixed	operator*(const Fixed &otherOne) const;
		Fixed	operator/(const Fixed &otherOne) const;
		//increment/decrement operators
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
        
        //min and max
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};


std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

//comparition operators


#endif