#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;

	public:
		Contact();
		Contact(std::string info[]);
		void str(void);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_login(void);
};

#endif
