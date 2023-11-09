#include "limite.h"

void limite_of_expense(int& income, int& consumption) {
    cout << "enter your income" << endl;
    while (!(cin >> income)) {
        cout << "Invalid input. Please enter a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "write your consumption" << endl;
    while (!(cin >> consumption)) {
        cout << "Invalid input. Please enter a number." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}