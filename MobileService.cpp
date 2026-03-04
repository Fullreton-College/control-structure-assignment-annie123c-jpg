#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int units;
    double price = 199.00;
    double discountPercent = 0.00;
    int discountLevel = 0;

    cout << "Enter the number of units purchased: ";
    cin >> units;

    if (units >= 10 && units <= 19)
    {
        discountLevel = 1;
    }
    // changed level 2 to be between 20 and 49 units
    // because it doesn't make sense for units between 40
    // and 50 to have no discount :) 
    else if (units >= 20 && units <= 49)
    {
        discountLevel = 2;
    }
    else if (units >= 50 && units <= 99)
    {
        discountLevel = 3;
    }
    else if (units >= 100)
    {
        discountLevel = 4;
    }

    switch (discountLevel)
    {
        case 1:
            discountPercent = 0.20;
            break;
        case 2:
            discountPercent = 0.30;
            break;
        case 3:
            discountPercent = 0.40;
            break;
        case 4:
            discountPercent = 0.50;
            break;
        default:
            discountPercent = 0.00;
    }
    
    double totalCost = units * price * (1 - discountPercent);
    cout << "Total cost: $" << fixed << setprecision(2) << totalCost << endl;

    return 0;

}
