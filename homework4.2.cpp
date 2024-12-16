#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int number{}, sumUnit{};
    std::cout << "Введите целое число:\n";
    std::cin >> number;
    while (number != 0)
    {
        sumUnit += number % 10;
        number /= 10;
    }

    std::cout << "Сумма цифр: " << sumUnit;
    return EXIT_SUCCESS;
}