#include <iostream>
#include <vector>
using namespace std;

const vector<string> svec = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
};

void calcWeekofDay(int year, int month, int day) {
    if (month == 1 || month == 2) {
        month += 12;
        year--;
    }

    int week = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400 + 1) % 7;

    cout << svec[week] << endl;
}

int main() {
    int year = 0, month = 0, day = 0;

    cout << "please enter year month day:" << endl;
    while (cin >> year >> month >> day)
    {
        calcWeekofDay(year,month,day);
        cout << "please enter year month day:" << endl;
    }

    return 0;

}
