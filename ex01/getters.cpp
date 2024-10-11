/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:43:04 by akajjou           #+#    #+#             */
/*   Updated: 2024/10/11 21:12:33 by akajjou          ###   ########.fr       */
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
    while (1)
    {   
        std::cout << "Enter First Name ->";
        std::getline(std::cin, FirstName);
        if (std::cin.eof())
            ft_exit();
        if (FirstName.empty())
            std::cout << RED << "First Name can't be empty" << RESET << std::endl;
        else
            break;
    }
}

void Contact::set_lastname()
{
    while (1)
    {
        std::cout << "Enter Last Name ->";
        std::getline(std::cin, LastName);
        if (std::cin.eof())
            ft_exit();
        if (FirstName.empty())
            std::cout << RED << "last Name can't be empty" << RESET << std::endl;
        else
            break;
    }
}

void Contact::set_nickname()
{
    while (1)
    {
        std::cout << "Enter Nick Name ->";
        std::getline(std::cin, NickName);
        if (std::cin.eof())
            ft_exit();
        if (FirstName.empty())
            std::cout << RED << "NickName can't be empty" << RESET << std::endl;
        else
            break;
    }
}

void Contact::set_phonenumber()
{
    while (1)
    {
        std::cout << "Enter Phone Number ->";
        std::getline(std::cin, PhoneNumber);
        if (std::cin.eof())
            ft_exit();
        if (FirstName.empty())
            std::cout << RED << "Phone Number can't be empty" << RESET << std::endl;
        else
            break;
    }
}

void Contact::set_darkestsecret()
{
    while (1)
    {
        std::cout << "Enter Darkest Secret ->";
        std::getline(std::cin, DarkSecret);
        if (std::cin.eof())
            ft_exit();
        if (FirstName.empty())
            std::cout << RED << "D.S can't be empty" << RESET << std::endl;
        else
            break;
    }
}
