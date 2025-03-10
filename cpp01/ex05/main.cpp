/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:08:44 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/09 21:52:22 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	test;

	std::cout << "Debug" << std::endl;
	test.complain("1");
	std::cout << "Info" << std::endl;
	test.complain("2");
	std::cout << "Warning" << std::endl;
	test.complain("3");
	std::cout << "Error" << std::endl;
	test.complain("4");
	std::cout << "Whatever value" << std::endl;
	test.complain("");
	return (0);
}
