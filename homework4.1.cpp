#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int number{}, sum{};
    do
    {
        std::cout << "Введите целое число или число '0', чтобы закончить:\n";
        std::cin >> number;
        sum += number;
    } while (number != 0);

    std::cout << "Сумма: " << sum;
    return EXIT_SUCCESS;
}
