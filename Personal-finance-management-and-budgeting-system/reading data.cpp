#include "reading data.h"

bool reading_data(vector<string>& type_expense, vector<int>& wast_category, int& income, int& consumption) {
    string folder = "data.txt";
    ifstream read;
    read.open(folder);
    if (!read.is_open()) {
        cout << "error in data reading" << endl;
        return false;
    }
    else {
        string line;
        while (getline(read, line)) {
            if (isdigit(line[0])) {
                wast_category.push_back(stoi(line));
            }
            else if (line == "end") {
                break;
            }
            else {
                type_expense.push_back(line);
            }
        }
        read >> income >> consumption;
    }
    read.close();
    return true;
}