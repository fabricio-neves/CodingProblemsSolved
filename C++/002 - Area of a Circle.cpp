#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double R;
    
    cin >> R;
    
    cout << fixed << setprecision(4);
    
    cout << "A=" << R*R*3.14159 << endl;
 
    return 0;
}