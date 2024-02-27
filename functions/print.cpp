#include <iostream>
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
void print(int n)
{

    loop1(i, n)
    {
        cout << i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print(n);
}