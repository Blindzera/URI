#include <iostream>
 
using namespace std;
 
int main() 
{
    int number, ht;
    double vh, salary;
    
    cin >> number >> ht >> vh;
    
    salary = ht*vh;
    
    cout << "NUMBER = " << number << "\n";
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << "SALARY = U$ " << salary << "\n";
 
    return 0;
}
