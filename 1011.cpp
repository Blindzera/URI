#include <iostream>
 
using namespace std;
 
int main() 
{
    double pi=3.14159, raio, volume;
    
    cin >> raio;
    
    volume = (4.0/3)*pi*raio*raio*raio;
    
    cout.precision(3);
    cout.setf(ios::fixed);
    
    cout << "VOLUME = " << volume << "\n";
 
    return 0;
}
