#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

Contact create_contact_from_input(void);
void	display_all_contacts(Contact pb[], int &pb_size);
void 	print_f(std::string str);

int main(void)
{
	Contact pb[8];
	int		pb_size = 0;
	std::string index;

	std::string cmd = "INIT";
	std::cout << "usage:\n- ADD\n- SEARCH (view/select from Phonebook)\n- EXIT\n\n";
	while (cmd != "EXIT")
	{
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD") {
			if (pb_size == 8) {
				std::cout << "ERROR: Phonebook is full.\n";
				continue ;
			}
			pb[pb_size] = create_contact_from_input();
			++pb_size;
		}
		else if (cmd == "SEARCH") {
			display_all_contacts(pb, pb_size);
			std::cout << "Select contact via index: ";
			std::getline(std::cin, index);
			pb[std::stoi(index)].str();
		}
		else if (cmd != "EXIT") {
			std::cout << "unknown command\n";
		}
	}
	return (0);
}

Contact create_contact_from_input(void)
{
	std::string info[11];
	std::string message[11] = {"First Name: ", "Last Name: ", "Nickname: ", "Login : ", "Postal Address: ", "Email Address: ", "Phone Number: ", "Birthday Date: ", "Favorite Meal: ", "Underwear Color: ", "Darkest Secret: "};

	std::cout << "Enter contact information:\n";
	for (int i = 0; i < 11; ++i) {
		std::cout << message[i];
		std::getline(std::cin, info[i]);
	}
	return (Contact(info));
}

void	display_all_contacts(Contact pb[], int &pb_size)
{
	for (int i = 0; i < pb_size; ++i) {
		std::cout << '|' << std::setw(10) << std::setfill(' ') << i;
		print_f(pb[i].get_first_name());
		print_f(pb[i].get_last_name());
		print_f(pb[i].get_login());
		std::cout << "|\n";
	}
}

void	print_f(std::string str)
{
	if (str.length() > 10) {
		std::cout << '|' << str.substr(0, 9) << '.';
	}
	else {
		std::cout << '|' << std::setw(10) << std::setfill(' ') << str;
	}
}
