/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irifarac <irifarac@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:23:51 by irifarac          #+#    #+#             */
/*   Updated: 2023/07/16 20:19:44 by irifarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException("Grade too high in constructor");
	else if (grade > 150)
		throw GradeTooLowException("Grade too low in constructor");
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade)
{
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj)
{
	if (this == &obj)
		return (*this);
	_grade = obj._grade;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return(this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade <= 1)
		throw GradeTooHighException("Grade too high");
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw GradeTooLowException("Grade too low");
	this->_grade++;
}

void	Bureaucrat::signAForm(AForm &obj) const
{
	if (obj.getSigned() == true)
		std::cout << "AForm is already signed" << std::endl;
	try
	{
		obj.beSigned(*this);
		std::cout << this->_name << " signed " << obj.getName() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << this->_name << " cannot sign " << obj.getName() <<
		"because " <<  exception.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &obj) const
{
	try
	{
		obj.execute(*this);
		std::cout << this->_name << " executed " << obj.getName() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cout << this->_name << " cannot execute " << obj.getName() <<
		"because " <<  exception.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &obj)
{
	output << obj.getName() << ", Bureaucrat grade " << obj.getGrade() << std::endl;
	return (output);
}
