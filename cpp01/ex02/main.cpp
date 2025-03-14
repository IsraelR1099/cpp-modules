/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:48:23 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 21:31:50 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr;
	std::string	&ref = str;

	ptr = &str;
	std::cout << "Direccion memoria original: " << &str << std::endl;
	std::cout << "Direccion memoria puntero: " << &ptr << std::endl;
	std::cout << "Direccion memoria referencia: " << &ref << std::endl;
	std::cout << "Valor variable original: " << str << std::endl;
	std::cout << "Valor puntero: " << *ptr << std::endl;
	std::cout << "Valor referencia: " << ref << std::endl;
	return (0);
}
