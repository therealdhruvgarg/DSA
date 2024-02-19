#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int rows = 0; rows < n; rows++)
    {
        int ans = 1;
        for (int col = 0; col < 2 * rows + 1; col++)
        {

            if (col == 0 || col == 2 * rows)
                cout << "*";
            else
            {

                cout << ans;
                if (col <= ((2 * rows) - 1) / 2)
                {
                    ans++;
                }
                else
                {
                    ans--;
                }
            }
        }
        cout << endl;
    }
    for (int rows = 0; rows < n - 1; rows++)
    {
        int ans = 1;
        for (int col = 0; col < 2 * (n - rows) - 3; col++)
        {

            if (col == 0 || col == 2 * (n - rows) - 4)
                cout << "*";
            else
            {
                cout << ans;
                if (col <= (2 * (n - rows) - 5) / 2)
                {
                    ans++;
                }
                else
                {
                    ans--;
                }
            }
        }
        cout << endl;
    }
    system("pause");
}