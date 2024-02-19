#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int rows = 0; rows < n; rows++)
    {
        int ans = rows + 1;
        for (int col = 0; col < n - rows - 1; col++)
        {
            cout << " ";
        }
        for (int col = n - rows - 1; col < n + rows; col++)
        {
            cout << ans;
            if (col <= (n + rows - 1) / 2)
            {
                ans++;
            }
            else
            {
                ans--;
            }
        }
        cout << endl;
    }
    system("pause");
}