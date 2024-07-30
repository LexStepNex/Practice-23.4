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

int main() {
    int day;
    do {
        cout << INPUT;
        cin >> day;
        if (!CORRECT_DAY(day)) std::cout << ERROR << "\n";
    } while (!CORRECT_DAY(day));

    if (day == MONDAY) cout << CONVERT(1);
    if (day == TUESDAY) cout << CONVERT(2);
    if (day == WEDNESDAY) cout << CONVERT(3);
    if (day == THURSDAY) cout << CONVERT(4);
    if (day == FRIDAY) cout << CONVERT(5);
    if (day == SATURDAY) cout << CONVERT(6);
    if (day == SUNDAY) cout << CONVERT(7);
}