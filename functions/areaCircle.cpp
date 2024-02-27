#include <iostream>
using namespace std;
float area(int radius){
   float ans;
    ans=3.14*radius*radius;
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of radius: ";
    cin>>n;
    float result=area(n);
    cout<<"Area of the given Circle is: "<<result;
    return 0;
}