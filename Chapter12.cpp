#include <iostream>
#include <string>

#include "Cow.h"

void ignore();
void showMenu();

void cowRunner();

int main()
{
	std::string in;
	showMenu();
	while (std::getline(std::cin, in))
	{
		if (in == "q" || in == "Q")
			break;
		char opt = in[0];
		if (!(isdigit(opt)))
		{
			std::cout << "Please enter a valid option.\n";
			showMenu();
			continue;
		}
		int option = atoi(&opt);
		switch (option)
		{
		case 0: cowRunner(); break;
		default: std::cout << "Please enter a valid option.\n";
		}
		showMenu();
	}
	return 0;
}


void ignore()
{
	std::cin.clear();
	std::cin.ignore(100, '\n');
}


void showMenu()
{
	std::cout << "0) Cow\nq) Quit\n> ";
}


void cowRunner()
{
	Cow jones;
	Cow bessie("Bessie", "Stampeding", 1500);
	Cow bob("Bob", "Grazing  ", 1700);
	Cow c(bob);
	Cow f = bessie;
	std::cout << "jones:";
	jones.showCow();
	std::cout << "bessie:";
	bessie.showCow();
	std::cout << "bob:";
	bob.showCow();
	std::cout << "c(bob):";
	c.showCow();
	std::cout << "f = bessie:";
	f.showCow();
}
