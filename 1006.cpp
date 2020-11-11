#include <iostream>
 
using namespace std;
 
int main() 
{
    double A, B, C, MEDIA;
    
    cin >> A >> B >> C;
    
    MEDIA = ((A*2)+(B*3)+(C*5))/10;
    
    cout.precision(1);
    cout.setf(ios::fixed);
    
    cout << "MEDIA = " << MEDIA << "\n";
    
    
    return 0;
}
