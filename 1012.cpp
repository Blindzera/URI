#include <iostream>
 
using namespace std;
 
int main() 
{
    double A, B, C, pi=3.14159;
    
    cin >> A >> B >> C;
    
    cout.precision(3);
    cout.setf(ios::fixed);
    
    cout << "TRIANGULO: " << (A*C)/2 << "\n";
    cout << "CIRCULO: " << pi*C*C << "\n";
    cout << "TRAPEZIO: " << ((A+B)*C)/2 << "\n";
    cout << "QUADRADO: " << B*B << "\n";
    cout << "RETANGULO: " << A*B << "\n";
    
    return 0;
}
