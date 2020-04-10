#include <iostream>

using namespace std;

enum class WeekDay { Monday, Tuesday, Wedneda, Thursday, Friday, Saturaday, Sunday };

int main() {
    enum season { summer, spring, fall, winter };
    season now = winter;
    switch (now) {
    case summer:
        cout << "summer" << endl;
        break;
    case spring:
        cout << "spring" << endl;
        break;
    case fall:
        cout << "fall" << endl;
        break;
    case winter:
        cout << "winter" << endl;
        break;
    other:
        break;
    }

    WeekDay weekDay = WeekDay::Monday;

    switch (weekDay) {
    case WeekDay::Friday:
        cout << "The day is Friday" << endl;
        break;
    }

    return 0;
}
