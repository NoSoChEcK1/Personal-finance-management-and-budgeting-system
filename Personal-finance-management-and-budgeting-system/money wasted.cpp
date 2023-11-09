#include "money wasted.h"

void count_money(vector<string>& type_expense, vector<int>& wast_category, int& consumption) {
    int wast_mon = 0;
    for (auto it : wast_category) {
        wast_mon += it;
    }
    if (wast_mon > consumption) {
        cout << "you are spending more than planned!!!" << endl;
    }
}