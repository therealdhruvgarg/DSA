#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;
    for (int rows = 0; rows < n; rows++)
    {
        char ch = 'A';
        for (int col = 0; col < 2 * rows + 1; col++)
        {

            cout << ch << " ";
            if (col < (2 * rows + 1) / 2)
            {
                ch++;
            }
            else
                ch--;
        }
        cout << endl;
    }
    system("pause"); 
    return 0;
}