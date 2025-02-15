#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP 

#include <Contacto.hpp>
#include <array>

class PhoneBook {

private:
	std::array <Contacto, 8> contactos;
	int newContactoPos;

public:
	PhoneBook();

	void addContacto(Contacto contacto);

	void findContacto(size_t index);

};

#endif
