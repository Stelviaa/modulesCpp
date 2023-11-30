/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:58:54 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/30 11:54:43 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string copyContent(std::ifstream& file)
{
    std::string contentFile;
    std::string tmp;
    
    while (!getline(file, tmp).eof())
        contentFile += tmp + '\n';
    getline(file, tmp);
    contentFile += tmp;
    return (contentFile);
}

std::string format(std::string contentFile, std::string s1, std::string s2)
{
    size_t pos = 0;
    std::string finalLine;
    
    for (size_t i = 0; i < contentFile.size(); i ++)
    {
        size_t j = 0;
        pos = contentFile.find(s1);
        if (pos != contentFile.npos && pos == i)
        {
            finalLine.append(s2);
            j += s2.size();
            i += s1.size() - 1;
            contentFile[i] = contentFile[i] + 1;
        }
        else
        {
            finalLine.append(1, contentFile[i]);
            j ++;
        }
    }
    return (finalLine);
}

void    fillOut(std::string name, std::string finalLine)
{
    name += ".replace";
    std::ofstream out(name.c_str());
    if (!out.is_open())
    {
        std::cout << "Error at creation of file" << std::endl;
        return ;
    }
    if (!finalLine.empty() && finalLine[finalLine.size()] != '\n')
        out << finalLine << std::endl;
    else
        out << finalLine;
    out.close();
}

int manage(char **av)
{

    std::string s1 = av[2];
    std::string s2 = av[3];
    if (!s1.size() || !s2.size())
    {
        std::cout << "void argument" << std::endl;
        return (-1);
    }
    std::ifstream file(av[1]);
    std::string contentFile;
    std::string finalLine;
    std::string name = av[1];
    if (!file.is_open())
    {
        std::cout << "File doesn't exist or bad name" << std::endl;
        return (-1);
    }
    contentFile = copyContent(file);
    file.close();
    finalLine = format(contentFile, s1, s2);
    fillOut(name, finalLine);
    return (0);
}

int main(int ac, char *av[])
{
    if (ac != 4)
    {
        std::cout << "Bad number of arguments" << std::endl ;
        return (0);
    }
    manage(av);
}