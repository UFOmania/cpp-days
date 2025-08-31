#include <string.h>

class Contact
{
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;

	public:
		std::string&	get_first_name();
		std::string&	get_last_name();
		std::string&	get_nickname();
		std::string&	get_phone_number();
		void			set_first_name(char *first_name);
		void			set_last_name(char *last_name);
		void			set_nickname(char *last_name);
		void			set_phone_number(char *phone_number);
		void			set_darkest_secret(char *darkest_secret);

		Contact();
		~Contact();

};


