#include <iostream>

using namespace std;
 
int main() {
 
   unsigned int opcao = 0, alcool = 0, gasolina = 0, diesel = 0;
    
    while(opcao != 4){
        cin >> opcao;
        switch(opcao){
            case 1: alcool++; break;
            case 2: gasolina++; break;
            case 3: diesel++; break;
            case 4: break;
        }
    }
        cout << "MUITO OBRIGADO" << endl
        << "Alcool: " << alcool << endl
        << "Gasolina: " << gasolina << endl
        << "Diesel: " << diesel << endl;
        
     return 0;
}