/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <sboetti@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:37:27 by sboetti           #+#    #+#             */
/*   Updated: 2024/01/06 14:37:27 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_UTILS_HPP
# define PHONEBOOK_UTILS_HPP

# include <iostream>
# include "contact.hpp"

std::string	add_spaces(int n);
std::string	fix_width(std::string str, long unsigned max);
int			search_ui(Contact contacts[8]);

#endif
