#include <iostream>
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
float celciusFaherenheit(float n)
{
    float ans;
    ans = (n * 9 / 5) + 32;
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    float result = celciusFaherenheit(n);
    cout << "The result is: " << result;
}