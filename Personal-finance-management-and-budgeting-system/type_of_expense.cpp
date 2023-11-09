#include "type_of_expense.h"

void category_expence(vector<string>& type_expense) {
    cout << "enter your expense categories. To stop, write 'stop'" << endl;
    string types_expense;
    while (types_expense != "stop") {
        cin >> types_expense;
        if (types_expense != "stop") {
            type_expense.push_back(types_expense);
        }
    }
}