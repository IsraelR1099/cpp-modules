/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:01:52 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/10 21:58:46 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap();
		explicit ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &obj);
		ClapTrap &operator=(const ClapTrap &obj);
		~ClapTrap();
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	private:
		std::string		m_name;
		unsigned int	m_hitPoints;
		unsigned int	m_energyPoints;
		unsigned int	m_damage;
};
#endif
