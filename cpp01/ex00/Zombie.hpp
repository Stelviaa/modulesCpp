/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:21:29 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/27 19:50:25 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{
    
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        void    setName(std::string name);
        std::string getName(void) const;
        void        announce(void);
        ~Zombie();
};
