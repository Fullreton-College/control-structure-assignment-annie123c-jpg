#include <iostream>

using namespace std;

int main()
{
	double length1, width1, area1;
    double length2, width2, area2;

    cout << "Comparing Two Rectangles by Area"<< endl << endl;
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    cout << "Enter the width of the first rectangle: ";
    cin >> width1;
    area1 = length1 * width1;
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    cout << "Enter the width of the second rectangle: ";
    cin >> width2;
    area2 = length2 * width2;

    if (area1 > area2)
    {
        cout << "The first rectangle has a greater area than the second rectangle." << endl;
    }
    else if (area1 < area2)
    {
        cout << "The second rectangle has a greater area than the first rectangle." << endl;
    }
    else
    {
        cout << "The areas of the two rectangles are the same." << endl;
    }    
    


    return 0;
}
   

