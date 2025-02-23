#include "../includes/Contacto.hpp"
#include <iostream>

Contacto::Contacto(){}

Contacto::Contacto(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds) {
	firstName = fn;
	lastName = ln;
	nickName = nn;
	phoneNumber = pn;
	darkestSecret = ds;
}

const std::string& Contacto::getFirstName() {
	return firstName;
}
void Contacto::setFirstName(const std::string& fn){
	firstName = fn;
}

const std::string& Contacto::getLastName() {
	return lastName;
}
void Contacto::setLastName(const std::string& ln){
	lastName = ln;
}

const std::string& Contacto::getNickName() {
	return nickName;
}

void Contacto::setNickName(const std::string& nn){
	nickName = nn;
}
	
const std::string& Contacto::getPhoneNumber() {
	return phoneNumber;
}
void Contacto::setPhoneNumber(const std::string& pn){
	phoneNumber = pn;
}

const std::string& Contacto::getDarkestSecret() {
	return darkestSecret;
}
void Contacto::setDarkestSecret(const std::string& ds){
	darkestSecret = ds;
}

const std::string format(std::string text) {
	if (text.size() > 10) {
		text[10] = '.';
		text.erase(11);
	}
	if (text.size() < 10)
		text.insert(0, 10 - text.size(), ' ');
	return text;
}

void Contacto::showContact(size_t index){
	std::cout << format(std::to_string(index)) << '|' << format(firstName) << '|' << format(lastName) << '|' << format(nickName) << '|' 
	<< std::endl;
}

bool Contacto::allFieldsFilled() {
	if (firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty())
		return false;
	return true;
}



