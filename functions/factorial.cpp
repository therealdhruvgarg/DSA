#include <iostream>
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int factorial(int n)
{
    int ans = 1;
    loop1(i, n)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int result = factorial(n);
    cout << "The result is: " << result;
}