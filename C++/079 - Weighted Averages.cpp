#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    unsigned short int N = 0, i, j;
    float teste1, teste2, teste3;
    
    cin >> N;
    cout << fixed << setprecision(1);
    float resultados[N];
    
    for(i = 0; i < N; i++){
        cin >> teste1 >> teste2 >> teste3;
        resultados[i] = teste1 * 2 + teste2 * 3 + teste3 * 5;
    }
    for(i = 0; i < N; i++)
    cout << resultados[i] / (2 + 3 + 5) << endl;
    
    return 0;
}