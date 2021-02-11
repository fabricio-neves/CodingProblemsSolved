#include <iostream>
#include <math.h>

using namespace std;
 
int main() {

    int A, B, C, MaiorAB, Maior;
    
    cin >> A >> B >> C;
    
    MaiorAB = (A + B + abs(A - B)) / 2;
    
    Maior = (MaiorAB + C + abs(MaiorAB - C))/2;
    
    cout << Maior << " eh o maior" << endl;
    
    return 0;
}