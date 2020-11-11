#include <iostream>
 
using namespace std;
 
int main() 
{
    double area, raio, pi=3.14159;
    
    cin >> raio;
    
    area = pi*raio*raio;
    
    cout.precision(4);
    cout.setf(ios::fixed);
    
    cout << "A=" << area << "\n";
 
    return 0;
}
