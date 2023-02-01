#include <iostream>

enum Month {
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main() {
	setlocale(LC_ALL, "Rus");
	short count = 1;
	
	while (count != 0) {
		std::cout << "Введите номер месяца: ";
		std::cin >> count;
		if (count <= 12) {
			Month month = static_cast<Month>(count);
			switch (month) {
				case Month::January: std::cout << "Январь\n\n"; break;
				case Month::February: std::cout << "Февраль\n\n"; break;
				case Month::March:	std::cout << "Март\n\n"; break;
				case Month::April: std::cout << "Апрель\n\n"; break;
				case Month::May: std::cout << "Май\n\n"; break;
				case Month::June:	std::cout << "Июнь\n\n"; break;
				case Month::July: std::cout << "Июль\n\n"; break;
				case Month::August: std::cout << "Август\n\n"; break;
				case Month::September:	std::cout << "Сентябрь\n\n"; break;
				case Month::October: std::cout << "Октябрь\n\n"; break;
				case Month::November: std::cout << "Ноябрь\n\n"; break;
				case Month::December: std::cout << "Декабрь\n\n"; break;
				default: std::cout << "До свидания!\n\n"; break;
			}
		} else {
			std::cout << "Непрвильный номер месяца!\n\n";
		}
	}
	return 0;
}
