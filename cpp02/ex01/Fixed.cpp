/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:40:53 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 22:49:32 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : m_fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) : m_fixedPoint(copy.m_fixedPoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (m_fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	m_fixedPoint = raw;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	m_fixedPoint = copy.getRawBits();
	return (*this);
}

Fixed::Fixed(const int value) : m_fixedPoint(value << m_fractBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	m_fixedPoint = roundf(value * (1 << m_fractBits));
}

float	Fixed::toFloat() const
{
	return (static_cast<float>(this->m_fixedPoint) / (1 << this->m_fractBits));
}

int	Fixed::toInt() const
{
	return (static_cast<int>(roundf((float)m_fixedPoint / (1 << m_fractBits))));
}

std::ostream	&operator<<(std::ostream &output, const Fixed &copy)
{
	output << copy.toFloat();
	return (output);
}
