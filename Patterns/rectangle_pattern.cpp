#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;
    for (int rows = 0; rows < n; rows++)
    { // loop for rows
        for (int col = 0; col < m; col++)
        { // loop for columns
            cout << "* ";
        }
        cout << endl;
    }
}
