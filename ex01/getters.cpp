/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:43:04 by akajjou           #+#    #+#             */
/*   Updated: 2024/10/09 23:20:23 by akajjou          ###   ########.fr       */
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
    while (FirstName.empty())
    {   
        std::cout << "Enter First Name ->";
        std::getline(std::cin, FirstName);
    }
    if (std::cin.eof())
        exit(0);
}

void Contact::set_lastname()
{
    while (LastName.empty())
    {
        std::cout << "Enter Last Name ->";
        std::getline(std::cin, LastName);
    }
    if (std::cin.eof())
        exit(0);
}

void Contact::set_nickname()
{
    while (NickName.empty())
    {
        std::cout << "Enter Nick Name ->";
        std::getline(std::cin, NickName);
    }
    if (std::cin.eof())
        exit(0);
}

void Contact::set_phonenumber()
{
    while (PhoneNumber.empty())
    {
        std::cout << "Enter Phone Number ->";
        std::getline(std::cin, PhoneNumber);
    }
    if (std::cin.eof())
        exit(0);
}

void Contact::set_darkestsecret()
{
    while (DarkSecret.empty())
    {
        std::cout << "Enter Darkest Secret ->";
        std::getline(std::cin, DarkSecret);
    }
    if (std::cin.eof())
        exit(0);
}
