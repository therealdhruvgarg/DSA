#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int rows = 0; rows < n; rows++)
    {

        if (rows == 0)
        {
            for (int col = 0; col < n - rows; col++)
            {
                cout << col + rows + 1;
            }
            cout << endl;
        }
        else
        {
            for (int col = 0; col < n - rows; col++)
            {
                if (col == 0 || col == n - rows - 1)
                {
                    cout << col + rows + 1;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}