#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row++) // loop for rows
    {
        for (int col = 0; col < n; col++) // loop for columns
        {
            cout << "* ";
        }
        cout << endl;
    }
} // square pattern has columns == rows