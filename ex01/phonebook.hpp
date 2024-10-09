#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include <iostream>
#include <string>

#define MAX_CONTACTS 8

void    name__parser_helper(std::string *name);
void    name_parser(std::string *Fname, std::string *Lname, std::string *Nname);


class   Contact
{
    private :
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkSecret;
    public :
        Contact();
        // getter
        std::string get_firstname()     const;
        std::string get_lastname()      const;
        std::string get_nickname()      const;
        std::string get_phonenumber()   const;
        std::string get_darkestsecret() const;
        // setter
        void set_firstname();
        void set_lastname();
        void set_nickname();
        void set_phonenumber();
        void set_darkestsecret();

};

class   PhoneBook
{
    private :
        Contact contact[MAX_CONTACTS];
        int     index;
    public :
        PhoneBook();
        void add();
        void search();
        void print_contacts();

};


















#endif