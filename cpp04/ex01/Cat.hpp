/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:26:03 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/12 20:14:51 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &obj);
		virtual ~Cat();
		Cat	&operator=(const Cat &obj);

		const std::string	&getType() const;
		virtual void		makeSound() const;
	private:
		Brain	*_brain;
};
#endif
