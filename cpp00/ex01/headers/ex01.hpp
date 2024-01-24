#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

//ADD
void add_contact_to_phonebook(PhoneBook *phonebook);
//SEARCH
void print_contact_list(PhoneBook *phonebook);
void search_contact_list(PhoneBook *phonebook);

#endif