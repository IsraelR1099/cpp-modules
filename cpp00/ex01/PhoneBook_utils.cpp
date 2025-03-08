/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:39:00 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 13:48:40 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static int	ft_is_nbr(const std::string &str)
{
	int	i;

	for (i = 0; str[i]; i++)
	{
		if (!std::isdigit(str[i]))
			return (0);
	}
	return (1);
}

static bool	isValidString(const std::string &str)
{
	if (str.empty())
		return (false);
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isalpha(str[i]))
			return (false);
	}
	return (true);
}

std::string	ft_getString(const std::string &msg)
{
	std::string	new_line;

	std::cout << msg;
	if (!std::getline(std::cin, new_line))
		std::exit(0);
	while (!isValidString(new_line))
	{
		std::cout << "Parametro no valido. Ingresar valor de nuevo." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << msg;
		if (!std::getline(std::cin, new_line))
			std::exit(0);
	}
	return (new_line);
}

unsigned int	ft_phone_number()
{
	std::string	number;
	int			ret;

	std::cout << "Phone number: ";
	if (!std::getline(std::cin, number))
		std::exit(0);
	while (number.empty() || !ft_is_nbr(number))
	{
		std::cout << "Parametro no valido. Ingresar valor de nuevo." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Phone number: " << std::flush;
		if (!std::getline(std::cin, number))
			std::exit(0);
	}
	ret = std::atoi(number.c_str());
	return (ret);
}
