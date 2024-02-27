#include <iostream>
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
void printDigits(int n)
{
    int digit;
    while (n != 0)
    { 
        digit = n % 10;
        cout << digit << endl;
        n /= 10;
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    printDigits(n);
}