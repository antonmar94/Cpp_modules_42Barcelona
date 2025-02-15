#ifndef CONTACTO_HPP

#define CONTACTO_HPP

#include <string>

class Contacto {

private:

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:

	Contacto();
	Contacto(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds);

	const std::string& getFirstName();
	void setFirstName(const std::string& fn);

	const std::string& getLastName();
	void setLastName(const std::string& ln);

	const std::string& getNickName();
	void setNickName(const std::string& nn);
	
	const std::string& getPhoneNumber();
	void setPhoneNumber(const std::string& pn);

	const std::string& getDarkestSecret();
	void setDarkestSecret(const std::string& ds);

	void showContact(size_t index);
	bool allFieldsFilled();

};

#endif
