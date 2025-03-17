#include <bits/stdc++.h>
using namespace std;

int main() {
    double totalBill, tipPercent, totalTip, tipPerPerson, billPerPerson, totalPerPerson, totalamountperperson;
    int numPeople;
    cout << "Welcome to the tip calculator" << endl;
    cout << "What is the total bill? ";
    cin >> totalBill;
    cout << "How much tip would you like to give? (Enter 10, 12, or 15): ";
    cin >> tipPercent;
    cout << "How many people to split the bill? ";
    cin >> numPeople;
    totalTip = totalBill * (tipPercent / 100.0);
    tipPerPerson = totalTip / numPeople;
    totalamountperperson = (totalBill / numPeople) + tipPerPerson;
    cout << "Total amount each person will pay: " << fixed << setprecision(2) 
         << totalamountperperson << endl;
    cout << "Each person should pay: " << fixed << setprecision(2) 
         << totalPerPerson << endl;
    return 0;
}