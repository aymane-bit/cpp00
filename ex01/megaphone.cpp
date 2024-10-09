/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:11:48 by akajjou           #+#    #+#             */
/*   Updated: 2024/10/09 03:15:15 by akajjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

Contact::Contact()
{
    FirstName = "";
    LastName = "";
    NickName = "";
    PhoneNumber = "";
    DarkSecret = "";
}

PhoneBook::PhoneBook()
{
    index = 0;
}

void PhoneBook::add()
{
    if (index == MAX_CONTACTS)
        index = 0;
    contact[index].set_firstname();
    contact[index].set_lastname();
    contact[index].set_nickname();
    contact[index].set_phonenumber();
    contact[index].set_darkestsecret();
    index++;
    std::cout << "Contact added successfully" << std::endl;
    
}

void    PhoneBook::print_contacts()
{
    int i = 0;
    std::string Fname;
    std::string Lname;
    std::string Nname;

    if (index == 0)
    {
        std::cout << "|-------------------------------------------|\n";
        std::cout << "No contacts to show" << std::endl;
        return ;
    }
    while (i < index)
    {
        std::cout << "|         ";
        std::cout << i;
        std::cout << "|";
        Fname = contact[i].get_firstname();
        Lname = contact[i].get_lastname();
        Nname = contact[i].get_nickname();
        name_parser(&Fname, &Lname, &Nname);
        std::cout << Fname << "|" << Lname << "|" 
        << Nname << "|" << std::endl;
        i++;
    }
    std::cout << "|-------------------------------------------|\n";
}

void    PhoneBook::search()
{
    if (index == 0) 
        return ;
    int index2;
    std::cout << "Enter index ->";
    std::cin >> index2;
    index2++;
    if (index2 < 0 || index2 > index)
    {
        std::cout << "Invalid index" << std::endl;
        return ;
    }
    std::cout << "First Name ->" << contact[index2].get_firstname() << std::endl;
    std::cout << "Last Name ->" << contact[index2].get_lastname() << std::endl;
    std::cout << "Nick Name ->" << contact[index2].get_nickname() << std::endl;
    std::cout << "Phone Number ->" << contact[index2].get_phonenumber() << std::endl;
    std::cout << "Darkest Secret ->" << contact[index2].get_darkestsecret() << std::endl;
}


void    search(PhoneBook phone)
{
    std::cout << "____________________________________________\n";
    std::cout << "|          |          |          |          |\n";
    std::cout << "|  index   |first name|last name | nickname |\n";
    std::cout << "|----------|----------|----------|----------|\n";
    phone.print_contacts();
    phone.search();

}

int main()
{
    PhoneBook phone;
    std::string read_line;
    

    while (read_line != "EXIT" && std::cin.good())
    {
        std::cout << "PLEAS ENTER A COMMENDE ->";
        std::getline(std::cin,read_line);
        if (read_line == "ADD")
            phone.add();
        else if (read_line == "PRINT")
            phone.print_contacts();
        else if (read_line == "SEARCH")
            search(phone);
        else if (read_line == "EXIT")
            break;            
    }
    







    
}