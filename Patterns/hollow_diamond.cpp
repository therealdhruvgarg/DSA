#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < n - rows - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * rows + 1; col++)
        {
            if (col == 0 || col == 2 * rows)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < rows; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * (n - rows) - 1; col++)
        {
            if (col == 0 || col == 2 * (n - rows) - 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    system("pause"); 
    return 0;
}