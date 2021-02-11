#include <iostream>
 
using namespace std;
 
int main() {

    int N, i, atual = 1, proximo = 2, anterior = 1;
	
	do{
	    cin >> N;
	}while(N < 0 || N >= 46);

    for(i = 0; i < N - 1; i++){
		if(i < 2)
			cout << i << " ";
		else{
			cout << atual << " ";
			anterior = atual;
			atual = proximo;
			proximo = anterior + proximo;
		}
	}
	
	cout << atual << endl;
	
    return 0;
}