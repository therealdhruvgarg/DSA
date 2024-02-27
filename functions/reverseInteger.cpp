#include <iostream>
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int reverseInterger(int n)
{
    int digit, ans = 0;
    while (n != 0)
    {
        digit = n % 10;
        ans = ans * 10 + digit;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int result = reverseInterger(n);
    cout << "The result is: " << result;
}