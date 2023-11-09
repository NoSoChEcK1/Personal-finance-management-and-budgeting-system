#include <iostream>
#include<string>
#include <vector>
#include "type_of_expense.h"
#include "limite.h"
#include "money wasted.h"
#include "wast category.h"
#include"save.h"
#include<fstream>
#include"reading data.h"
#include "empty.h"
using namespace std;
int main() {
    vector<string> type_expense;
    vector<int> wast_category;
    int money_wasted;
    int income, consumption;

    const string path = "data.txt";
    if (isFileEmpty(path)) {
        limite_of_expense(income, consumption);
        category_expence(type_expense);
        wast_categori(type_expense, wast_category);
        save(type_expense, wast_category, income, consumption);
    }
    else {
        if (!reading_data(type_expense, wast_category, income, consumption)) {
            return 1;
        }
    }

    string end_input;
    bool firstLoop = true;
    while (end_input != "end") {
        if (!firstLoop) {
            cout << "Enter 'end' to finish or 'change' to modify data, 'income' to view income, 'consumption' to view expenses, 'category' to view expense categories: ";
            cin >> end_input;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer after input
        }
        else {
            firstLoop = false;
        }

        if (end_input == "change") {
            string change_input;
            cout << "Enter 'income', 'consumption', or 'category' to modify data: ";
            cin >> change_input;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer after input

            if (change_input == "income") {
                limite_of_expense(income, consumption);
            }
            else if (change_input == "consumption") {
                limite_of_expense(income, consumption);
            }
            else if (change_input == "category") {
                category_expence(type_expense);
                wast_categori(type_expense, wast_category);
            }
            else {
                cout << "Invalid input. Please enter 'income', 'consumption', 'category', or 'end'." << endl;
            }
        }
        else if (end_input == "income") {
            cout << "Income: " << income << endl;
        }
        else if (end_input == "consumption") {
            cout << "Total Expenses: " << consumption << endl;
        }
        else if (end_input == "category") {
            cout << "Expense Categories: " << endl;
            for (size_t i = 0; i < type_expense.size(); ++i) {
                cout << type_expense[i] << ": " << wast_category[i] << endl;
            }
        }
    }

    return 0;
}