/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:40:53 by irifarac          #+#    #+#             */
/*   Updated: 2025/01/19 21:32:51 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : _fixedPoint(copy._fixedPoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = copy.getRawBits();
	return (*this);
}

Fixed::Fixed(const int value) : _fixedPoint(value << _fractBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(value * (1 << _fractBits));
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_fixedPoint) / (1 << this->_fractBits));
}

int	Fixed::toInt(void) const
{
	return (static_cast<int>(roundf((float)this->_fixedPoint / (1 << this->_fractBits))));
}

std::ostream	&operator<<(std::ostream &output, const Fixed &copy)
{
	output << copy.toFloat();
	return (output);
}
