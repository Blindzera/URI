#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() 
{
    double dist, x1, y1, x2, y2;
    
    cin >> x1 >> y1 >> x2 >> y2;
    
    dist = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    
    cout.precision(4);
    cout.setf(ios::fixed);
    
    cout << dist << "\n";
 
    return 0;
}
