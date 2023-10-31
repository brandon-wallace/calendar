#include "utility.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>

int main()
{
    std::time_t t = time(0);
    std::tm *ltm = localtime(&t);
    int year { 1900 + ltm->tm_year };
    int day { ltm->tm_mday };
    int month { 1 + ltm->tm_mon };

    int monthEnd{ getMonthEnd(month, year) };

    std::cout << '\n';
    std::cout << "  " << getMonth(month) << " " << year << '\n';
    std::cout << "  Su  Mo  Tu  We  Th  Fr  Sa" << '\n';
    std::cout << "  ••••••••••••••••••••••••••" << '\n';

    for (int d = 1; d <= monthEnd; d++)
    {
        if (d == day)
        {
            std::cout << std::setw(2) << "*" << d;
            continue;
        }
        std::cout << std::setw(4) << d;
        if (d % 7 == 0)
        {
            std::cout << '\n';
        }
    }
    std::cout << '\n';
    std::cout << '\n';

    return 0;
}
