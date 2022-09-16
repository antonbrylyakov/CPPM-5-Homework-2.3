#include <iostream>

struct Address
{
	std::string country;
	std::string city;
	std::string street;
	std::string buildingNumber;
	unsigned int flatNumber;
	unsigned int postalCode;
};

void printAddress(const Address& address)
{
	std::cout << "Страна: " << address.country << std::endl;
	std::cout << "Город: " << address.city << std::endl;
	std::cout << "Улица: " << address.street << std::endl;
	std::cout << "Номер дома: " << address.buildingNumber << std::endl;
	std::cout << "Номер квартиры: " << address.flatNumber << std::endl;
	std::cout << "Индекс: " << address.postalCode << std::endl;
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	Address address1
	{
		"Россия",
		"Новосибирск",
		"Бульвар молодежи",
		"38",
		158,
		650055
	};
		
	Address address2
	{
		"Россия",
		"Бийск",
		"Декабристов",
		"10/1",
		9,
		659322
	};

	printAddress(address1);
	printAddress(address2);
}
