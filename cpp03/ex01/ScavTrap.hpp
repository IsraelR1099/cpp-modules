/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:02:33 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/11 23:00:01 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		explicit ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &obj);
		virtual ~ScavTrap();
		ScavTrap &operator=(const ScavTrap &obj);
		void			 guardGate() const;
		virtual void	attack(const std::string &target);
};
#endif
