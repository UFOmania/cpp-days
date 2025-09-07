#include "Contact.hpp"

void	Contact::set_first_name(std::string fname) {_first_name = fname;}
void	Contact::set_last_name(std::string lname) {_last_name = lname;}
void	Contact::set_phone_number(std::string phone) {_phone_number = phone;}
void	Contact::set_nickname(std::string nickname) {_nickname = nickname;}
void	Contact::set_darkest_secret(std::string secret) {_darkest_secret = secret;}

std::string&	Contact::get_first_name() {return (_first_name);}
std::string&	Contact::get_last_name() {return (_last_name);}
std::string&	Contact::get_phone_number() {return (_phone_number);}
std::string&	Contact::get_nickname() {return (_nickname);}
std::string&	Contact::get_darkest_secret() {return (_darkest_secret);}

