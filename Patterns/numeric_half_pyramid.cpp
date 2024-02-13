#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int rows = 0; rows < n; rows++)
    { // loop for rows
        for (int col = 0; col < rows + 1; col++)
        { // loop for columns
            cout << col + 1 << " ";
        }
        cout << endl;
    }
}