/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akajjou <akajjou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:11:48 by akajjou           #+#    #+#             */
/*   Updated: 2024/10/09 22:58:40 by akajjou          ###   ########.fr       */
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
    std::cout << "WELCOME TO PHONEBOOK" << std::endl;
}


void PhoneBook::add()
{
    int tmp  = index;
    if (index >= MAX_CONTACTS)
        tmp %= 8;
    contact[tmp].set_firstname();
    contact[tmp].set_lastname();
    contact[tmp].set_nickname();
    contact[tmp].set_phonenumber();
    contact[tmp].set_darkestsecret();
    index++;
    std::cout << "Contact added successfully" << "["<< tmp + 1 
    << "/8]" << std::endl;
    
}

void    PhoneBook::print_contacts()
{
    int i = 0;
    int PrintIndex = 1;
    int tmp_index = index;
    std::string Fname;
    std::string Lname;
    std::string Nname;

    if (tmp_index == 0)
    {
        std::cout << "|-------------------------------------------|\n";
        std::cout << "No contacts to show" << std::endl;
        return ;
    }
    else if (tmp_index >= 8)
        tmp_index = 8;
    while (i < tmp_index)
    {
        std::cout << "|         ";
        std::cout << PrintIndex++;
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

bool isAllDigits(const std::string& str) {
    if (str.empty()) {
        return false;
    }

    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}

void    PhoneBook::search()
{
    int index2;
    int tmp_index = index;
    std::string input;
    if (index == 0) 
        return ;
    if (index >= 8)
        tmp_index = 8;
    std::cout << "Enter index ->";
    std::getline(std::cin, input);
    if (!isAllDigits(input) || std::cin.eof())
    {
        std::cout << "Invalid index\n" << std::endl;
        return ;
    }
    index2 = std::stoi(input);
    index2--;
    if (index2 < 0 || index2 >= tmp_index)
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
    
    while (read_line != "EXIT")
    {
        std::cout << "\nPLEAS ENTER A COMMENDE (ADD,SEARCH,EXIT) ->";
        std::getline(std::cin,read_line);
        if (std::cin.eof())
            break;
        if (read_line == "ADD")
            phone.add();
        else if (read_line == "SEARCH")
            search(phone);
    }
    std::cout << "\nSEE YOU NEXT TIME \n" << std::endl;
    return 0;
    
}