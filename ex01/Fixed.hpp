/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:16:32 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/07 16:29:10 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <stdint.h>
#include <cmath>


class Fixed{
	private:
		int number;
		static const int FractionalPartBits;
	public:
		Fixed(); //A default constructor that initializes the fixed-point number value to 0.
		Fixed(const int Value);
		Fixed(const float Value); 
		Fixed(const Fixed& other);// copy constructor
		Fixed& operator=(const Fixed& other);//A copy assignment operator overload.
		~Fixed();

		float toFloat( void ) const;//that returns the raw value of the fixed-point value
		int toInt( void ) const;//that sets the raw value of the fixed-point number
		int getRawBits( void ) const;//that returns the raw value of the fixed-point value
		void setRawBits( int const raw);
};

std::ostream &operator<<(std::ostream &stream, const Fixed &obj);
const int Fixed::FractionalPartBits = 8;

#endif