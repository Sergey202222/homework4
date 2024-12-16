#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int number;
    std::cout << "Введите целое число:\n";
    std::cin >> number;

    for (int row{ 1 }; row <= 10; ++row)
    {
        std::cout << number << " x " << row << " = " << number * row << '\n';
    }

    return EXIT_SUCCESS;
}