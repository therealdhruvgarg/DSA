#include <iostream>
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
int setBit(int n, int k)
{
    int mask = 1 << k;
    int ans = n | mask;
    return ans;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int result = setBit(n, k);
    cout << result << endl;
}