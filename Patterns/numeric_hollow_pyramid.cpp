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
        for (int col = 0; col < n - rows - 1; col++)
        {
            cout << " ";
        }

        for (int col = n - rows - 1; col < n + rows; col++)
        {
            if (rows == n - 1)
            {

                if (col % 2 == 0)
                {
                    cout << ans;
                    ans++;
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (col == n - rows - 1 || col == n + rows - 1)
                {
                    cout << ans;
                    ans = ans + rows;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    system("pause");
}