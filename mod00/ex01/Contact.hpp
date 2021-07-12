#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {
    public:
        Contact();
        Contact(std::string info[11]);
        void str();
        std::string getFirstName();
        std::string getLastName();
        std::string getLogin();

    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _login;
        std::string _postal_address;
        std::string _email_address;
        std::string _phone_number;
        std::string _birthday_date;
        std::string _favorite_meal;
        std::string _underwear_color;
        std::string _darkest_secret;
};

#endif
