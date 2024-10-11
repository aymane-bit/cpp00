/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 02:57:24 by akajjou           #+#    #+#             */
/*   Updated: 2024/10/11 20:35:10 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"


void    name__parser_helper(std::string *name)
{
    int space = 10 - name->length();
    std::string space_str(space, ' ');
    space_str.append(*name);
    *name = space_str;
}

void    name_parser(std::string *Fname, std::string *Lname, std::string *Nname)
{
    
    if (Fname->length() > 10)
    {
        Fname->resize(9);
        Fname->append(".");
    }
    else 
        name__parser_helper(Fname);
    if (Lname->length() > 10)
    {
        Lname->resize(9);
        Lname->append(".");
    }
    else if (Lname->length() != 10)
        name__parser_helper(Lname);
    if (Nname->length() > 10)
    {
        Nname->resize(9);
        Nname->append(".");
    }
    else if (Nname->length() != 10)
        name__parser_helper(Nname);
}

void    ft_exit()
{
    std::cout << RED << "\nExiting phonebook..." << RESET << std::endl;
    std::cout << GREEN << "Goodbye!" << RESET << std::endl;
    exit(0);
}