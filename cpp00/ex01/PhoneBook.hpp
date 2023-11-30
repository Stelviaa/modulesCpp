/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:46:25 by sforesti          #+#    #+#             */
/*   Updated: 2023/11/24 11:56:44 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {

    public:


        void		setContactsToAdd(std::string firstName, std::string lastName, std::string nickName, int i);
        Contact		getContactsToAdd(int i) const;
        void		setContacts(std::string firstName, std::string lastName, std::string nickName, std::string n, std::string darkSecret, int i);
        Contact		getContacts(int i) const;
        void        setNumberContact();
        int        	getNumberContact() const;
        void		display_line();
        void        display_tab(int index);
        PhoneBook();
        ~PhoneBook();
		
	private:

    std::string	_format(std::string s, int i);
    int     _NumberContact;
    Contact _Contacts[8];
    Contact _ContactsToAdd[8];
    
};