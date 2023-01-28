#include <iostream>

struct address {
	std::string city;
	std::string street;
	short hous_number = 0;
	short apartament_number = 0;
	int index = 0;
};

void print_address(address& _addr) {
	std::cout << "Город: " << _addr.city << std::endl;
	std::cout << "Улица: " << _addr.street << std::endl;
	std::cout << "Номер дома: " << _addr.hous_number << std::endl;
	std::cout << "Номер квартиры: " << _addr.apartament_number << std::endl;
	std::cout << "Индекс: " << _addr.index << std::endl;
}

int main() {
	setlocale(LC_ALL, "Rus");

	address addr_1 = { "Москва", "Арбат", 12, 8, 123456 };
	print_address(addr_1);

	address addr_2 = { "Ижевск", "Пушкина", 59, 143, 953769 };
	print_address(addr_2);

	return 0;
}