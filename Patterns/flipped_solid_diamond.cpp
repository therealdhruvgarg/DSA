#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < n - rows; col++)
        {
            cout << "* ";
        }
        for (int col = n - rows; col < n + rows; col++)
        {
            cout << "  ";
        }
        for (int col = n + rows; col < 2 * n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < rows + 1; col++)
        {
            cout << "* ";
        }
        for (int col = rows + 1; col < (2 * n) - rows - 1; col++)
        {
            cout << "  ";
        }
        for (int col = (2 * n) - rows - 1; col < 2 * n; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}