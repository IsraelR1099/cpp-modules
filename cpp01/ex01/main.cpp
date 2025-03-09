/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:38:16 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 23:27:25 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static int	ft_is_nbr(const std::string &str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static void	ft_setN(int *N)
{
	std::string	nbr;

	std::cout << "Numero de zombies: ";
	if(!std::getline(std::cin, nbr))
		std::exit(0);
	while (nbr.empty() || !ft_is_nbr(nbr))
	{
		std::cout << "Parametro no valido, ingresar valor de nuevo." <<	std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Numero de zombies: ";
		if(!std::getline(std::cin, nbr))
			std::exit(0);
	}
	*N = std::atoi(nbr.c_str());
	if (*N > 1000 || *N < 0)
	{
		std::cout << "Para el carro quieres morir en un ataque zombie?.";
		std::cout << "Rick Grimes solo puede con 1000." << std::endl;
		*N = 1000;
	}
}

static void	ft_setName(std::string &name)
{
	std::string	str;

	std::cout << "Nombre de los zombies: ";
	if (!std::getline(std::cin, str))
		std::exit(0);
	while (str.empty())
	{
		std::cout << "Parametro no valido, ingresar valor de nuevo." <<	std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Nombre de los zombies: ";
		if(!std::getline(std::cin, str))
			std::exit(0);
	}
	name = str;
}

int	main()
{
	Zombie		*horde;
	int			i;
	int			N;
	std::string	name;

	ft_setN(&N);
	ft_setName(name);
	horde = zombieHorde(N, name);
	if (!horde)
	{
		std::cout << "Error al asignar memoria." << std::endl;
		return (1);
	}
	i = 0;
	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
