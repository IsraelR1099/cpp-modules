/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:29:50 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/12 20:48:44 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		explicit Dog(const std::string &type) : Animal(type) {}
		Dog(const Dog &obj);
		virtual ~Dog();
		Dog &operator=(const Dog &obj);

		const std::string	&getType() const;
		virtual void		makeSound() const;
};
#endif
