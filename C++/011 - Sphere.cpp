#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

    float R;
    
    cin >> fixed >> setprecision (2) >> R;
    
    cout << fixed << setprecision (3) << "VOLUME = " << 4.0/3.0 * 3.14159 * R * R * R << endl;
    
    return 0;
}