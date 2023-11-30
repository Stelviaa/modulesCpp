/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforesti <sforesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:48:55 by sforesti          #+#    #+#             */
/*   Updated: 2023/09/20 13:31:36 by sforesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {

	public:
		
		void setLastName(std::string s);
		void setFirstName(std::string s);
		void setNickName(std::string s);
		void setNumber(std::string s);
		void setDarkSecret(std::string s);
		std::string getLastName() const;
		std::string getFirstName() const;
		std::string getNickName() const;
		std::string getNumber() const;
		std::string getDarkSecret() const;
		Contact();
		~Contact();
		
	private:

		std::string _LastName;
		std::string _FirstName;
		std::string _NickName;
		std::string _Number;
		std::string _DarkSecret;

};