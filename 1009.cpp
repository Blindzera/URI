#include <iostream>
 
using namespace std;
 
int main() 
{
    char nome[50];
    double salary, sales, result;
    
    cin >> nome >> salary >> sales;
    
    result = salary + (0.15*sales);
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << "TOTAL = R$ " << result << "\n";
     
    return 0;
}
