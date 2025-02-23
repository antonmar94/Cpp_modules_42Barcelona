#include "../includes/Contacto.hpp"
#include <iostream>
#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	newContactoPos = 0;
}
	
void PhoneBook::addContacto(Contacto contacto){
	if (newContactoPos > 8)
		newContactoPos = 0;
	contactos[newContactoPos] = contacto;
	newContactoPos++;
}

void PhoneBook::findContacto(size_t index) {
	if (contactos.size() - 1 < index)
		std::cout << "El indice consultado no existe en el listado" << std::endl;
	else
		contactos[index].showContact(index);
}

