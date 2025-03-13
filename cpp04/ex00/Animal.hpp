/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:17:30 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/12 18:40:03 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		Animal();
		explicit Animal(const std::string &type) : m_type(type) {}
		Animal(const Animal &obj);
		virtual	~Animal();
		Animal &operator=(const Animal &obj);

		const std::string		&getType() const;
		virtual void			makeSound() const;
	protected:
		std::string	m_type;
};
#endif
