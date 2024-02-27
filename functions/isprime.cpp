#include <iostream>
using namespace std;
void isprime(int n)
{
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "Not prime";
    }
    else
    {
        cout << "Prime";
    }
}
int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    isprime(n);
}