#include "PhoneBook.hpp"
#include <iostream>

int main()
{
    std::string line;
    PhoneBook   book;
    std::string tmp[5];
    int         i;

    i = 0;
    std::cin >> line;
    while (1)
    {
        std::string in;
        if (line == "EXIT" || std::getline(std::cin, in).eof())
            break ;
        if (line == "ADD")
        {
            while (tmp[0].size() == 0)
            {
                std::cout << "Enter last name: ";
                if (std::getline(std::cin, tmp[0]).eof())
                    return (0);
            }
            while (tmp[1].size() == 0)
            {
                std::cout << "Enter first name: ";
                if (std::getline(std::cin, tmp[1]).eof())
                    return (0);
            }
            while (tmp[2].size() == 0)
            {
                std::cout << "Enter nick name: ";
                if (std::getline(std::cin, tmp[2]).eof())
                    return (0);
            }
            while (tmp[3].size() == 0)
            {
                std::cout << "Enter your number: ";
                if (std::getline(std::cin, tmp[3]).eof())
                    return (0);
            }
            while (tmp[4].size() == 0)
            {
                std::cout << "Enter dark secret: ";
                if (std::getline(std::cin, tmp[4]).eof())
                    return (0);
            }
            book.setContacts(tmp[0], tmp[1], tmp[2], tmp[3], tmp[4], i % 8);
            book.setContactsToAdd(tmp[0], tmp[1], tmp[2], i % 8);
            tmp[0].erase();
            tmp[1].erase();
            tmp[2].erase();
            tmp[3].erase();
            tmp[4].erase();
            i ++;
        }
        else if (line == "SEARCH")
        {
            
            for (int i = 0; i <= book.getNumberContact(); i ++)
                book.display_tab(i);
            book.display_line();
        }
        std::cin >> line;
    }
}
