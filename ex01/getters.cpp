/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:43:04 by akajjou           #+#    #+#             */
/*   Updated: 2024/10/11 23:08:35 by akajjou          ###   ########.fr       */
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
        std::cout << "Enter " << BOLD << FirstName << RESET << " Last Name ->";
        std::getline(std::cin, LastName);
        if (std::cin.eof())
            ft_exit();
        if (LastName.empty())
            std::cout << RED << "last Name can't be empty" << RESET << std::endl;
        else
            break;
    }
}

void Contact::set_nickname()
{
    while (1)
    {
        std::cout << "Enter " << BOLD << FirstName << " " << LastName << RESET << " Nick Name ->";
        std::getline(std::cin, NickName);
        if (std::cin.eof())
            ft_exit();
        if (NickName.empty())
            std::cout << RED << "NickName can't be empty" << RESET << std::endl;
        else
            break;
    }
}

void Contact::set_phonenumber()
{
    while (1)
    {
        std::cout << "Enter "<< BOLD << FirstName << " " << LastName << RESET <<  " Phone Number ->";
        std::getline(std::cin, PhoneNumber);
        if (std::cin.eof())
            ft_exit();
        if (PhoneNumber.empty())
            std::cout << RED << "Phone Number can't be empty" << RESET << std::endl;
        else
            break;
    }
}

void Contact::set_darkestsecret()
{
    while (1)
    {
        std::cout << "Enter " << BOLD << FirstName << " " << LastName << RESET << " Darkest Secret ->";
        std::getline(std::cin, DarkSecret);
        if (std::cin.eof())
            ft_exit();
        if (DarkSecret.empty())
            std::cout << RED << "D.S can't be empty" << RESET << std::endl;
        else
            break;
    }
}
