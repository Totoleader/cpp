#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.class.hpp"

class PhoneBook
{
	private:
		int oldest_contact_index_;

	public:
		Contact contact_list_[8];
		void add_contact(void);

		PhoneBook(void);
		~PhoneBook(void);
};

#endif