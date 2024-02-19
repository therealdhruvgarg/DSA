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
            for (int col = 0; col < rows + 1; col++)
            {
                cout << col + 1;
            }
        }
        else
        {
            for (int col = 0; col < rows + 1; col++)
            {
                if (col == 0 or col == rows)
                    cout << col + 1;
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    system("pause"); 
    return 0;
}