#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   
    const double PLAN_A_PRICE = 39.99;
    const double PLAN_B_PRICE = 59.99;
    const double PLAN_C_PRICE = 79.99;

    const double PLAN_A_DATA = 2.0;
    const double PLAN_B_DATA = 8.0;

    const double ADDITIONAL_COST_PER_GB = 8.0;

    string name;
    char plan;
    double GB_used;
    double costA, costB, costC;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your plan (A, B, or C): ";
    cin >> plan; 

    cout << "Enter number of gigabytes used: ";
    cin >> GB_used;

    costA = PLAN_A_PRICE;
    if (GB_used > PLAN_A_DATA)
    {
        costA += (GB_used - PLAN_A_DATA) * ADDITIONAL_COST_PER_GB;
    }

    costB = PLAN_B_PRICE;
    if (GB_used > PLAN_B_DATA)
    {
        costB += (GB_used - PLAN_B_DATA) * ADDITIONAL_COST_PER_GB;
    }

    costC = PLAN_C_PRICE;

    switch (plan)
    {
        case 'A':
        case 'a':
            cout << "Customer: " << name << endl;
            cout << "Plan: A" << endl;
            cout << "Total amount due: $" << fixed << setprecision(2) << costA << endl;

            if (costA > costB)
            {
                cout << "You would save $" << fixed << setprecision(2) << (costA - costB) << " by switching to Plan B." << endl;
            }

            if (costA > costC)
            {
                cout << "You would save $" << fixed << setprecision(2) << (costA - costC) << " by switching to Plan C." << endl;
            }
            break;

        case 'B':
        case 'b':
            cout << "Customer: " << name << endl;
            cout << "Plan: B" << endl;
            cout << "Total amount due: $" << fixed << setprecision(2) << costB << endl;

            if (costB > costC)
            {
                cout << "You would save $" << fixed << setprecision(2) << (costB - costC) << " by switching to Plan C." << endl;
            }
            break;

        case 'C':
        case 'c': 
            cout << "Customer: " << name << endl;
            cout << "Plan: C" << endl;
            cout << "Total amount due: $" << fixed << setprecision(2) << costC << endl;
            break;
        default:
            cout << "Invalid plan selection." << endl;
    }

    return 0;
}


