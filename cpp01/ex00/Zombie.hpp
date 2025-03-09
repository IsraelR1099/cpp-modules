/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:31:47 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 23:05:18 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie
{
	public:
		explicit Zombie(const std::string &str);
		~Zombie();
		void		announce() const;
	private:
		std::string	m_name;
};

Zombie	*newZombie(const std::string &name);
void	randomChump(const std::string &name);
#endif
