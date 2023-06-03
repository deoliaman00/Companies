#include <iostream>
#include <string>
#include <sstream>

int dayOfYear(const std::string &date)
{
    int year, month, day;
    char delimiter;

    std::stringstream ss(date);
    ss >> year >> delimiter >> month >> delimiter >> day;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int dayOfYear = 0;
    for (int i = 1; i < month; ++i)
    {
        dayOfYear += daysInMonth[i];
    }

    dayOfYear += day;

    if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
    {
        dayOfYear += 1;
    }

    return dayOfYear;
}

int main()
{
    std::string date = "2023-05-24";
    int result = dayOfYear(date);
    std::cout << result << std::endl;

    return 0;
}
