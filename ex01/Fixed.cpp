/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:16:29 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/04 16:50:25 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(const int Value){
	std::cout << "Int constructor called" << std::endl;
	this->number = Value << Fixed::FractionalPartBits;
}

Fixed::Fixed(const float Value){
	std::cout << "Float constructor called" << std::endl;
	this->number = roundf(Value * 256); // tvalue * (1 << Fixed::FractionalPartBits)) shift 1 by 8 to the left

}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	this->number = other.toInt();
	this->floatNum = other.toFloat();
}