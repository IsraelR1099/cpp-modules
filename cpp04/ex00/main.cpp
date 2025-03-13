/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student42.barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 20:06:07 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/12 20:49:45 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "tests.hpp"

static void	testOrthodoxCanonicForm()
{
	std::cout << "Test Orthodox Canonic Form" << std::endl;
	{
		std::cout << "Test Animal" << std::endl;
		Animal	animal("Animal#1");
		Animal	animal2(animal);

		ASSERT(animal2.getType() == "Animal#1",
				"Animal2 copy constructor failed");
		Animal	animal3;
		animal3 = animal;
		ASSERT(animal3.getType() == "Animal#1",
				"Animal3 assignation operator failed");
	}
	{
		std::cout << "Test Dog" << std::endl;
		Dog	dog("Dog#1");
		Dog	dog2(dog);

		ASSERT(dog2.getType() == "Dog#1",
				"Dog2 copy constructor failed");

		Dog	dog3;
		dog3 = dog;

		ASSERT(dog3.getType() == "Dog#1",
				"Dog3 assignation operator failed");
	}
	{
		std::cout << "Test WrongAnimal" << std::endl;
		WrongAnimal	wrongAnimal;
		WrongAnimal	wrongAnimal2(wrongAnimal);
		WrongAnimal	wrongAnimal3;
		wrongAnimal3 = wrongAnimal;
	}
	{
		std::cout << "Test WrongCat" << std::endl;
		WrongCat	wrongCat;
		WrongCat	wrongCat2(wrongCat);
		WrongCat	wrongCat3;
		wrongCat3 = wrongCat;
	}
}


int	main()
{
	testOrthodoxCanonicForm();
}
