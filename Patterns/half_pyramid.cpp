#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int rows = 0; rows < n; rows++)
    { // loop for rows
        for (int col = 0; col <= rows; col++)//can also be like col<rows+1
        { // loop for columns
            cout << "* ";
        }
        cout << endl;
    }
    system("pause"); 
    return 0;
}