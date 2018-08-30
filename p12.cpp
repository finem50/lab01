// P11.cpp - This C++ Program will compute the profit of selling soft drinks

#include <iostream>
using namespace std;

int main( )
{
    int cases_per_day, bottles_per_day;
    int bottles_per_case = 12;
    int bottles_sold;
    double profit_per_bottle = 0.22;  // 22 cents per bottle profit
    double profit_per_day, profit_per_year, profit_per_decade;

    cout << "Press enter after entering each number \n";
    cout << "Enter number of cases \n";

    cin >> cases_per_day;

    bottles_sold = bottles_per_case * cases_per_day;
    profit_per_day = cases_per_day * bottles_per_case * profit_per_bottle;
    profit_per_year = 365 * profit_per_day;
    profit_per_decade = 3650 * profit_per_day;

    cout << "\nThe store has sold : ";
    cout << bottles_sold;
    cout << "  bottles \n";
    cout << "The store has a made : ";
    cout << profit_per_day;
    cout << "  per day. \n";
    cout << "That means the profit for one year will be : ";
    cout << profit_per_year;
    cout << "\nand the profit for 10 years will be : ";
    cout << profit_per_decade << endl;
    cout << "\nGood business?! \n";

    return 0;
}
