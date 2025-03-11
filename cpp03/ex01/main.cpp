/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:30:20 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/11 21:57:03 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	{
		ScavTrap	scavTrap("ScavTrap");
		int			i;
		scavTrap.attack("target");
		scavTrap.guardGate();
		i = 0;
		while (i++ < 9)
			scavTrap.attack("target");

		ScavTrap	scavTrap2(scavTrap);
		scavTrap2.attack("target");
		scavTrap2.guardGate();
		i = 0;
		while (i++ < 9)
			scavTrap2.attack("target");

		ScavTrap	scavTrap3 = scavTrap2;
		scavTrap3.attack("target");
		scavTrap3.guardGate();
		i = 0;
		while (i++ < 9)
			scavTrap3.attack("target");
		scavTrap3.beRepaired(10);
		scavTrap3.takeDamage(10);
	}
	{
		ScavTrap	scavTrap("ScavTrapDerived");
		ClapTrap	*clapTrap(&scavTrap);

		clapTrap->attack("target with Derived");
		clapTrap->ClapTrap::attack("target with Base");
	}
	// This is a test about virtual keyword. Virtual functions only
	// work with pointers and references. If we try to use a virtual
	// function with an object, the function will be called from the
	// base class.
	{
		ScavTrap	scavTrap("ScavTrapDerived");
		ClapTrap	clapTrap(scavTrap);

		clapTrap.attack("target with Derived");
	}
	return (0);
}
