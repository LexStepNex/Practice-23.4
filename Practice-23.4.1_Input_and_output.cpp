#include <iostream>

#define INPUT "Input a day number from 1 to 7:"
#define CORRECT_DAY(day) (((day >= (1)) && (day <= (7))) ? (true) : (false))
#define ERROR "There are 7 days in a week, enter a number from 1 to 7."

#define MONDAY 1
#define TUESDAY 2
#define WEDNESDAY 3
#define THURSDAY 4
#define FRIDAY 5
#define SATURDAY 6
#define SUNDAY 7

#define DAY_1 "Monday"
#define DAY_2 "Tuesday"
#define DAY_3 "Wednesday"
#define DAY_4 "Thursday"
#define DAY_5 "Friday"
#define DAY_6 "Saturday"
#define DAY_7 "Sunday"

#define CONVERT(digit) DAY ## _ ## digit

using namespace std;

void DAY_str(int number_day) {
    if (number_day == MONDAY) cout << CONVERT(1);
    if (number_day == TUESDAY) cout << CONVERT(2);
    if (number_day == WEDNESDAY) cout << CONVERT(3);
    if (number_day == THURSDAY) cout << CONVERT(4);
    if (number_day == FRIDAY) cout << CONVERT(5);
    if (number_day == SATURDAY) cout << CONVERT(6);
    if (number_day == SUNDAY) cout << CONVERT(7);
}

int main() {
    int day;
    do {
        cout << INPUT;
        cin >> day;
        if (!CORRECT_DAY(day)) std::cout << ERROR << "\n";
    } while (!CORRECT_DAY(day));

    CONVERT(str)(day);
}