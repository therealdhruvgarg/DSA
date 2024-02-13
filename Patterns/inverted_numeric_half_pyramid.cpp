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
            cout << col + 1 << " ";
        }
        cout << endl;
    }
}