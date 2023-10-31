#include <iostream>

// isLeapYear calculates if the year is a leap year and return a boolean.
bool isLeapYear(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

// getMonthEnd calculates the last day of the month.
int getMonthEnd(int m, int y)
{
    int monthEnd{};

    switch(m)
    {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
            monthEnd = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            monthEnd = 30;
            break;
        case 2:
            if (isLeapYear(y))
            {
                monthEnd = 29;
                break;
            }
            monthEnd = 28;
            break;
        default:
            std::cerr << "Error" << '\n';
            break;
    }
    return monthEnd;
}

// getDayOfWeek finds which day of the week it is.
std::string getDayOfWeek(int d, int m, int y)
{
    static int daysOfWeek[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
    y -= m < 3;
    int dow{ (y + y / 4 - y / 100 + y / 400 + daysOfWeek[m - 1] + d) % 7 };

    std::string day {};
    switch (dow)
    {
        case 0:
            day = "Sunday";
            break;
        case 1:
            day = "Monday";
            break;
        case 2:
            day = "Tuesday";
            break;
        case 3:
            day = "Wednesday";
            break;
        case 4:
            day = "Thursday";
            break;
        case 5:
            day = "Friday";
            break;
        case 6:
            day = "Saturday";
            break;
    }
    return day;
}

// getMonth return the month as a string.
std::string getMonth(int m)
{
    std::string month = {};

    switch (m)
    {
        case 1:
            month = "January";
            break;
        case 2:
            month = "February";
            break;
        case 3:
            month = "March";
            break;
        case 4:
            month = "April";
            break;
        case 5:
            month = "May";
            break;
        case 6:
            month = "June";
            break;
        case 7:
            month = "July";
            break;
        case 8:
            month = "August";
            break;
        case 9:
            month = "September";
            break;
        case 10:
            month = "October";
            break;
        case 11:
            month = "November";
            break;
        case 12:
            month = "December";
            break;
    }

    return month;
}

