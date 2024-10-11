#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include <iostream>
#include <string>
#include <cctype> 

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RED     "\033[31m"
#define BOLD   "\033[1m"

#define MAX_CONTACTS 8

void    ft_exit();
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