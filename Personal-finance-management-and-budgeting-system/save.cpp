#include "save.h"

void save(const vector<string>& type_expense, const vector<int>& wast_category, const int& income, const int& consumption) {
    string folder = "data.txt";
    ofstream save(folder);
    if (!save.is_open()) {
        cout << "Error saving data" << endl;
    }
    else {
        for (const auto& it : type_expense)
            save << it << endl;
        for (const auto& it : wast_category)
            save << it << endl;
        save << income << endl;
        save << consumption << endl;
        save.close();
    }
}
