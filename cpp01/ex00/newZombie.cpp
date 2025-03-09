/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:43:05 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 23:01:05 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(const std::string &name)
{
	Zombie	*Winslow = new (std::nothrow) Zombie(name);

	if (!Winslow)
	{
		std::cerr << "Error: newZombie failed to allocate memory" << std::endl;
		return (NULL);
	}
	return (Winslow);
}
