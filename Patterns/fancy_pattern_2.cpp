#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < n - rows + 3; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2 * rows + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << rows + 1;
            }
            else
            {
                cout << "*";
            }
        }
        for (int col = 0; col < n - rows + 3; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    system("pause"); 
    return 0;
}