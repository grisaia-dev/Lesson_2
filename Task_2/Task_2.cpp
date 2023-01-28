#include <iostream>
#include <Windows.h>

struct BankAccount {
    std::string name;
    int account_number = 0;
    int balance = 0;
};

void new_balance(BankAccount& _acc) {
    std::cout << "Введите новый баланс: ";
    std::cin >> _acc.balance;
}

int main() {
    // Для кодировки на русском языке в вводе и выводе.
    SetConsoleCP(1251);         // ввод
    SetConsoleOutputCP(1251);   // вывод

    BankAccount acc;
    std::cout << "Введите номер счета: ";
    std::cin >> acc.account_number;
    std::cout << "Введите имя владельца: ";
    std::cin >> acc.name;
    std::cout << "Введите баланс: ";
    std::cin >> acc.balance;

    std::cout << "Ваш счет: " << acc.name << ", " << acc.account_number << ", " << acc.balance << std::endl;

    new_balance(acc); // Ввод новый данных баланса

    std::cout << "Ваш счет: " << acc.name << ", " << acc.account_number << ", " << acc.balance << std::endl;

    return 0;
}