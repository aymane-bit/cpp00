#include <iostream>
#include <cctype>
using namespace std;

void    capitalize(char *str)
{
    while (*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}

int     main(int ac, char **av) {
    
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        for (int i = 1; av[i] != NULL; i++)
        {
            capitalize(av[i]);
            cout << av[i];
        }
    }
    return 0;
}