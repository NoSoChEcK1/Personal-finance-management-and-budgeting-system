#include "wast category.h"
void wast_categori(vector<string>& type_expense, vector<int>& wast_category) {
    int count = 0;
    cout << "your categories" << endl;
    for (auto it : type_expense) {
        cout << count << ":" << it << "\t";
        ++count;
    }

    cout << "\nenter how much you spend on each category" << endl;
    int spend;
    count = 0;
    while (count < type_expense.size()) {
        cout << count << ": category" << endl;
        cin >> spend;
        wast_category.push_back(spend);
        ++count;
    }
}