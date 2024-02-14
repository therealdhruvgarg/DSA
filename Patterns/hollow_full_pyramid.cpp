#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int rows = 0; rows < n; rows++)
    {
        if (rows == n - 1)
        {
            for (int col = 0; col < n; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int col = 0; col < n - rows - 1; col++)
            {
                cout << " ";
            }
            for (int col = n - rows - 1; col < n; col++)
            {
                if (col == n - rows - 1 or col == n - 1)
                    cout << "* ";
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}