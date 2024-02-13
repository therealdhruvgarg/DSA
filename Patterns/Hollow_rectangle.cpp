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
    {
        // first row and last row print all *
        if (rows == 0 || rows == n - 1)
        {
            for (int col = 0; col < m; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            // first *
            cout << "* ";
            // hollow spaces
            for (int i = 0; i < m - 2; i++)
            {
                cout << "  ";
            }
            // last *
            cout << "* ";
        }
        cout << endl;
    }
}