#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main() 
{
    int A, B, C, D, maior;
    
    cin >> A >> B >> C;
    
    D = (A+B+abs(A-B))/2;
    
    maior = (C+D+abs(C-D))/2;
    
    cout << maior << " eh o maior\n";
    
    return 0;
}
