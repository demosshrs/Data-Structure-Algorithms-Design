#include <iostream>
using namespace std;
int main() {
    int year, month; //DEMOS
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    int days;
    string monthName;
    switch (month) {
        case 1:  monthName = "January";   days = 31; break;
        case 2:
            monthName = "February";
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            else
                days = 28;
            break;
        case 3:  monthName = "March";     days = 31; break;
        case 4:  monthName = "April";     days = 30; break;
        case 5:  monthName = "May";       days = 31; break;
        case 6:  monthName = "June";      days = 30; break;
        case 7:  monthName = "July";      days = 31; break;
        case 8:  monthName = "August";    days = 31; break;
        case 9:  monthName = "September"; days = 30; break;
        case 10: monthName = "October";   days = 31; break;
        case 11: monthName = "November";  days = 30; break;
        case 12: monthName = "December";  days = 31; break;
        default: cout << "Invalid month"; return 1;
    }
    cout << monthName << " " << year << " has " << days << " days." << endl;
    return 0;
}