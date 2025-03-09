/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:35:34 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 23:12:28 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	{
		Zombie	*Winslow;

		Winslow = newZombie("Winslow");
		Winslow->announce();
		randomChump("Another zombie wants to eat your brain");
		delete(Winslow);
	}
	{
		const Zombie	*Winslow;

		Winslow = newZombie("Winslow2");
		Winslow->announce();
		delete(Winslow);
	}
	return (0);
}
