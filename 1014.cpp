#include <iostream>
 
using namespace std;
 
int main() 
{
    int X;
    double Y;
    
    cin >> X >> Y;
    
    cout.precision(3);
    cout.setf(ios::fixed);
    
    cout << X/Y << " km/l\n";
 
    return 0;
}
