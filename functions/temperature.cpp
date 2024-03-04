#include <iostream>
#include <vector>
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i <= n; i++)
using namespace std;
vector<double> convertTemperature(double celsius)
{
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;
    vector<double> v;
    v.push_back(k);
    v.push_back(f);
    return v;
}
void printVector(const vector<double>& v) {
    for (double element : v) {
        cout << element << " ";
    }
    cout << endl;
}
int main()
{
    double n;
    cout << "Enter the number: ";
    cin >> n;
    vector result = convertTemperature(n);
     printVector(result);
   
}