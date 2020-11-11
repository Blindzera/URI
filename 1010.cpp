#include <iostream>
 
using namespace std;
 
int main() 
{
    int cod1, num1, cod2, num2;
    double value1, value2, total;
    
    cin >> cod1 >> num1 >> value1;
    cin >> cod2 >> num2 >> value2;
    
    total = (num1*value1) + (num2*value2);
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << "VALOR A PAGAR: R$ " << total << "\n";
    
     
    return 0;
}
