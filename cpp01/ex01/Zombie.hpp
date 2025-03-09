/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:41:18 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 23:22:01 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string.h>
# include <cstdlib>
# include <limits>

class	Zombie
{
	public:
		Zombie();
		explicit Zombie(const std::string &name);
		~Zombie();
		void	setName(const std::string &name);
		void	announce() const;
	private:
		std::string	m_name;
};

Zombie	*zombieHorde(int N, const std::string &name);
#endif
