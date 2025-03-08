/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:36:27 by irifarac          #+#    #+#             */
/*   Updated: 2025/03/08 14:54:55 by israel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() : m_first_name(""), m_last_name(""), m_nickname(""), m_phone_number(0), m_dark_secret(""), m_index(0)
{
}

Contact::Contact(const std::string &name, const std::string &last, const std::string &nick, unsigned int number, const std::string &dark, int i) :
m_first_name(name),
	m_last_name(last),
	m_nickname(nick),
	m_phone_number(number),
	m_dark_secret(dark),
	m_index(i)
{
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::ft_get(void)
{
	std::cout << "First name: " << m_first_name << std::endl;
	std::cout << "Last name: " << m_last_name << std::endl;
	std::cout << "Nickname: " << m_nickname << std::endl;
	std::cout << "Phone number: " << m_phone_number << std::endl;
	std::cout << "Dark secret: " << m_dark_secret << std::endl;
}

const std::string	&Contact::ft_getFirstName()
{
	return (m_first_name);
}

const std::string	&Contact::ft_getLastName()
{
	return (m_last_name);
}

const std::string	&Contact::ft_getNickName()
{
	return (m_nickname);
}
