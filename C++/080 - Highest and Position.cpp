#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    unsigned short int i, posicao;
    int valor = 0, maior = 0;
    
    for(i = 0; i < 100; i++){
        cin >> valor;
        if(valor > maior){
            maior = valor;
            posicao = i + 1;
        }
    }
    cout 
    << maior << endl
    << posicao << endl;
    
    return 0;
}