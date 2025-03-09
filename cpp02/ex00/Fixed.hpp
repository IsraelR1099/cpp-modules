/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:16:28 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 21:54:48 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		Fixed	&operator=(const Fixed &copy);
	private:
		int					m_fixedPoint;
		static int const	m_fractBits = 8;
};
#endif
