/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:43:04 by akajjou           #+#    #+#             */
/*   Updated: 2024/10/09 02:57:01 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

std::string Contact::get_firstname() const
{
    return FirstName;
}

std::string Contact::get_lastname() const
{
    return LastName;
}

std::string Contact::get_nickname() const
{
    return NickName;
}

std::string Contact::get_phonenumber() const
{
    return PhoneNumber;
}

std::string Contact::get_darkestsecret() const
{
    return DarkSecret;
}

void Contact::set_firstname()
{
    std::cout << "Enter First Name ->";
    std::getline(std::cin, FirstName);
}

void Contact::set_lastname()
{
    std::cout << "Enter Last Name ->";
    std::getline(std::cin, LastName);
}

void Contact::set_nickname()
{
    std::cout << "Enter Nick Name ->";
    std::getline(std::cin, NickName);
}

void Contact::set_phonenumber()
{
    std::cout << "Enter Phone Number ->";
    std::getline(std::cin, PhoneNumber);
}

void Contact::set_darkestsecret()
{
    std::cout << "Enter Darkest Secret ->";
    std::getline(std::cin, DarkSecret);
}
