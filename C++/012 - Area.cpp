#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {

    float A, B, C;
    
    cin >> fixed >> setprecision (1) >> A >> B >> C;
    
    cout << fixed << setprecision (3)
    << "TRIANGULO: " << A * C / 2 << endl
    << "CIRCULO: " << 3.14159 * C * C << endl
    << "TRAPEZIO: " << (A + B) * C / 2 << endl
    << "QUADRADO: " << B * B << endl
    << "RETANGULO: " << A *B << endl;
    
    return 0;
}