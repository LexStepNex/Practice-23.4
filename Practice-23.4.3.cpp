#include <iostream>

#define EMPTY_CARRIAGE 0
#define CROWDED_CARRIAGE 20

#define QUANTITY_CARRIAGE 10

#define FOR(start, end, code) for (int i = start; i < end;) { code }

#define STR_FOR_INPUT std::cout << "Input quantity people in " << i << " carriage: "
#define INPUT_PEOPLE std::cin >> railway_carriage[i]
#define FOR_TRUE_CONDITION {std::cout << "There must be at least zero people\n"; continue;}
#define CONDITION_FOR_INPUT if(railway_carriage[i] < EMPTY_CARRIAGE) FOR_TRUE_CONDITION

#define CALL(func) { func(railway_carriage); }

void count_people(int railway_carriage[]) {
    std::string crowded = "";
    std::string empty_carriage = "";
    int sum_peoples = 0;

    FOR(0, QUANTITY_CARRIAGE, {
        STR_FOR_INPUT;
        INPUT_PEOPLE;
        CONDITION_FOR_INPUT
        if (railway_carriage[i] > CROWDED_CARRIAGE) {
            if (crowded.empty()) crowded = (i + '0');
            else {
                crowded += ", ";
                std::string number;
                number = (i + '0');
                crowded += number;
            }
        }

        if (railway_carriage[i] == EMPTY_CARRIAGE) {
            if (empty_carriage.empty()) empty_carriage += (i + '0');
            else {
                empty_carriage += ", ";
                std::string number;
                number = (i + '0');
                empty_carriage += number;
            }
        }
        sum_peoples += railway_carriage[i];
        i++;
    })
    std::cout << "Sequence numbers of overcrowded carriages: " << crowded << "\n";
    std::cout << "Sequence numbers of empty carriages: " << empty_carriage << "\n";
    std::cout << "Total number of passengers: " << sum_peoples << "\n";
}

int main() {
    int railway_carriage[10];
    CALL(count_people);
    return 0;
}