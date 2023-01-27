#include <iostream>

enum class Month {
	January,
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
			switch (static_cast<short>(month)) {
				case 1: std::cout << "Январь\n\n"; break;
				case 2: std::cout << "Февраль\n\n"; break;
				case 3:	std::cout << "Март\n\n"; break;
				case 4: std::cout << "Апрель\n\n"; break;
				case 5: std::cout << "Май\n\n"; break;
				case 6:	std::cout << "Июнь\n\n"; break;
				case 7: std::cout << "Июль\n\n"; break;
				case 8: std::cout << "Август\n\n"; break;
				case 9:	std::cout << "Сентябрь\n\n"; break;
				case 10: std::cout << "Октябрь\n\n"; break;
				case 11: std::cout << "Ноябрь\n\n"; break;
				case 12: std::cout << "Декабрь\n\n"; break;
				default: std::cout << "До свидания!\n\n"; break;
			}
		} else {
			std::cout << "Непрвильный номер месяца!\n\n";
		}
	}
	return 0;
}
