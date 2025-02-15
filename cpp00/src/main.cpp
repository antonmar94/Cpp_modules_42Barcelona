#include "../includes/Contacto.hpp"
#include "../includes/PhoneBook.hpp"
#include <iostream>

int main() {

	PhoneBook phoneBook;
	std::string comando;

	while (comando != "EXIT") {
		std::cout << "Inserte un comando, los comandos admitidos son ADD, SEARCH y EXIT" << std::endl;
		comando = "";
		std::cin >> comando;
		if (comando == "ADD") {
			std::string fn, ln, nn, pn, ds;

			std::cout << "Indique el nombre del nuevo contacto" << std::endl;
			std::cin >> fn;
			std::cout << "Indique el apellido del nuevo contacto" << std::endl;
			std::cin >> ln;
			std::cout << "Indique el nick del nuevo contacto" << std::endl;
			std::cin >> nn;
			std::cout << "Indique el numero de telefono del nuevo contacto" << std::endl;
			std::cin >> pn;
			std::cout << "Indique el secreto del nuevo contacto" << std::endl;
			std::cin >> ds;
			Contacto contacto(fn, ln, nn, pn, ds);
			if (contacto.allFieldsFilled()) {
				phoneBook.addContacto(contacto);
				std::cout << "Contacto insertado" << std::endl;
			}
			else
				std::cout << "El contacto no puede tener ningun campo vacio" << std::endl;
		}
		else if (comando == "SEARCH") {
			size_t index;
			std::cout << "Indique el indice del contacto a imprimir" << std::endl;
			std::cin >> index;
			phoneBook.findContacto(index);
		}
		else if (comando == "EXIT")
			std::cout << "Se ha finalizado la ejecucion y eliminado la lista de contactos" << std::endl;
		else
			std::cout << "El comando indicado es erroneo" << std::endl;
	}
	return 0;
}

