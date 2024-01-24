#ifndef CONTACT_H
# define CONTACT_H

#define FIRST_NAME 0
#define LAST_NAME 1
#define NICKNAME 2
#define PHONE_NUMBER 3
#define SECRET 4

class Contact
{
	private:

		//ATTRIBUTES
		int index_;
		std::string first_name_;
		std::string last_name_;
		std::string nickname_;
		std::string phone_number_;
		std::string secret_;

	public:

		//SETTERS
		void set_index_(int index);
		void set_info(std::string first_name, int field);
		void set_first_name_(std::string first_name);
		void set_last_name_(std::string last_name);
		void set_nickname_(std::string nickname);
		void set_phone_number_(std::string phone_number);
		void set_secret_(std::string secret);

		//GETTERS
		std::string get_firstname(void) const;
		std::string get_lastname(void) const;
		std::string get_phone_number(void) const;
		std::string get_nickname(void) const;
		std::string get_secret(void) const;
		int get_index(void) const;

		//MEMBER FUNCTIONS
		void init_contact(int contact_index);

		//CONSTRUCTOR, DESTRUCTOR
		Contact(void);
		~Contact();
};

#endif