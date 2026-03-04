#include <iostream>
#include <iomanip>
using namespace std;
using std::cout;

//originally uploaded to wrong assignment - FIXED resubmission
//i was wondering why it said to use a switch statement when it made
//the code more complicated, but I realize now that it was for the 
//other assignment (about phone service rather than software store)

int main()
{
    int units;
    double price = 199.00;
    double discountPercent = 0.00;

    cout << "Enter the number of units purchased: ";
    cin >> units;

    if (units >= 10 && units <= 19)
    {
        discountPercent = 0.20;
    }
    // changed second discount to be between 20 and 49 units
    // because it doesn't make sense for units between 40
    // and 50 to have no discount :) 
    else if (units >= 20 && units <= 49)
    {
        discountPercent = 0.30;
    }
    else if (units >= 50 && units <= 99)
    {
        discountPercent = 0.40;
    }
    else if (units >= 100)
    {
        discountPercent = 0.50;
    }
    else 
    {
        discountPercent = 0.00;
    }

    double totalCost = units * price * (1 - discountPercent);
    cout << "Total cost: $" << fixed << setprecision(2) << totalCost << endl;

    return 0;

}

