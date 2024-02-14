/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:54:35 by sboetti           #+#    #+#             */
/*   Updated: 2024/01/06 15:54:35 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{  
    return ;
}

std::string	Contact::get_fname(void) const
{
	return (this->_fname);
}

std::string	Contact::get_lname(void) const
{
	return (this->_lname);
}

std::string	Contact::get_nname(void) const
{
	return (this->_nname);
}

std::string	Contact::get_phone_num(void) const
{
	return (this->_phone_num);
}

std::string	Contact::get_secret(void) const
{
	return (this->_secret);
}

void	Contact::set_fname(std::string str)
{
	this->_fname = str;
}

void	Contact::set_lname(std::string str)
{
	this->_lname = str;
}

void	Contact::set_nname(std::string str)
{
	this->_nname = str;
}

void	Contact::set_phone_num(std::string str)
{
	this->_phone_num = str;
}

void	Contact::set_secret(std::string str)
{
	this->_secret = str;
}
