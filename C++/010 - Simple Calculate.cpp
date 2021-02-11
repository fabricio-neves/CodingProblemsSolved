#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

    int c1, c2, n1, n2;
    float p1,p2;
    
    cin >> c1 >> n1 >> fixed >> setprecision (2) >> p1;
    cin >> c2 >> n2 >> fixed >> setprecision (2) >> p2;
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision (2) << n1 * p1 + n2 * p2 << endl;
    
    return 0;
}